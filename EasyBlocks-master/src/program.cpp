#include "program.h"

Program::Program(ProgramModel* model) : _model(model)
{
    _window = new ProgramWindow(model);
    connect(_window, SIGNAL(closed()), this, SLOT(emitStopped()));
}

Program::~Program()
{
    if (_window != NULL)
        delete _window;

    if (_model != NULL)
        delete _model;
}

void Program::start()
{
    _window->show();
    _window->update();
    _model->startExecution();
    _model->sendSignal(Signal(Signal::START));                   //注意：这几种信号作为触发条件，属于event模块中，然后不断的监听鼠标或者键盘事件
}


void Program::stop()
{
    _window->close();
}

bool Program::pause()
{
    if (_model->getExecutionHandler()->isRunning())
        _model->getExecutionHandler()->stop();
    else
        _model->getExecutionHandler()->start();

    return _model->getExecutionHandler()->isRunning();
}

void Program::emitStopped()
{
    emit stopped();
}

