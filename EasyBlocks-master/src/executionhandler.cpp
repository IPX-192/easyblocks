#include "executionhandler.h"
#include <QDebug>

ExecutionHandler::ExecutionHandler(IOHandler *ioHandler) : _ioHandler(ioHandler)
{
    _running = false;
    _working = false;
    _qtimer = new QTimer();
    _qtimer->setInterval(1);

    connect(_qtimer, SIGNAL(timeout()), this, SLOT(executionTick()));
}

ExecutionHandler::~ExecutionHandler()
{
    while(!_threads.isEmpty()) {
        delete _threads.first();
        _threads.removeFirst();
    }

    delete _qtimer;
}

void ExecutionHandler::start()
{
    _prevDrawTime = QDateTime::currentDateTime();
    _prevExecutionTime = QDateTime::currentDateTime();
    _running = true;

    _qtimer->start();
}

void ExecutionHandler::stop()
{
    _running = false;
    _qtimer->stop();
}

int ExecutionHandler::getNumThreads() const
{
    return _threads.size();
}

void ExecutionHandler::addExecutionThread(Block* block, VarTable* varTable, Sprite* sprite)
{
    if(block == NULL || varTable == NULL || sprite == NULL)
        return;

    ExecutionThread* thread = new ExecutionThread(block, varTable, sprite, _ioHandler);

    _threads.append(thread);
}

void ExecutionHandler::executionTick()
{
    if(!_running)
        return;

    if(_working)
    {
        qDebug() << "can't keep up: skipping tick";
        return;
    }

    _working = true;

    //QDateTime currentTime = QDateTime::currentDateTime();

    if(EXECUTION_TICK_INTERVAL <= _prevExecutionTime.msecsTo(QDateTime::currentDateTime()))
    {
        executeThreads();          //控制事件的信号,所有对物块的操作都在这里面
        emit executionTicked();
        _prevExecutionTime = _prevExecutionTime.addMSecs(EXECUTION_TICK_INTERVAL);
    }

    if(DRAW_TICK_INTERVAL <= _prevDrawTime.msecsTo(QDateTime::currentDateTime()))
    {
        emit drawingTicked();      //控制绘画的信号
        _prevDrawTime = _prevDrawTime.addMSecs(DRAW_TICK_INTERVAL);
    }

    _working = false;
}

void ExecutionHandler::executeThreads()
{
    //放了物块这里就是赋值,执行了事件之后会删除
    if(_threads.size() == 0)
    {
        //qDebug()<<u8"没得物块";
        return;
    }
    for(int i = _threads.size()-1; i >= 0; i--) {
        ExecutionThread* et = _threads.at(i);
        et->executeNext();                  //重要：物块的关键应该是在这里执行的

        if(et->isEmpty()) {
            delete et;
            _threads.removeAt(i);
        }
    }
}
