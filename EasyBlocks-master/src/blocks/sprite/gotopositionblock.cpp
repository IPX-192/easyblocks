#include "gotopositionblock.h"

#include <QDebug>

#include "../../executionthread.h"
#include "../../valuemessage.h"

GoToPositionBlock::~GoToPositionBlock()
{
    if (_xPos != NULL)
        delete _xPos;

    if (_yPos != NULL)
        delete _yPos;
}

QList<Block::ParamType> GoToPositionBlock::getParamTypes() const
{
    QList<Block::ParamType> params;
    params.append(Block::NUMBER_EXPRESSION);
    params.append(Block::NUMBER_EXPRESSION);
    return params;
}

//重要：说明 循环设置number就是逐步推进执行流程，处理不同阶段的任务，像这里就是第一步处理_xPos 相关的某个执行块的关联操作,第二步y,最后利用前面获取和处理好的信息（通过 m 和 executionThread 获取到的相关值）来移动精灵这个组件到指定位置
//m的内存问题：应该对 m 进行删除以避免内存泄漏
void GoToPositionBlock::executeNextStep(ExecutionThread& executionThread) const
{
    qDebug()<<"vvvvvvvvvvvvvvvvvvvvvvvvvvvvv";
    //check if block is valid for execution
    if(_xPos == NULL || _yPos == NULL)
        executionThread.endExecution(NULL);

    //get message
    ValueMessage* m = (ValueMessage*)executionThread.getMessage();
    if(m == NULL)
    {
        m = new ValueMessage();
        executionThread.setMessage(m);
    }

    //evaluate left

    if(m->getNumber() == 0)
    {
        executionThread.setNextBlock(_xPos);
        m->setNumber(1);
        return;
    }

    //evaluate right
    if(m->getNumber() == 1)
    {
        //take copy of returnValue
        m->setValue(executionThread.getReturnValue()->copy());
        //check left value
        if(m->getValue() == NULL || m->getValue()->getDataType() != Value::NUMBER)
        {
            executionThread.endExecution(NULL);
            return;
        }
        executionThread.setNextBlock(_yPos);
        m->setNumber(2);
        return;
    }

    //move sprite to position
    if(m->getNumber() == 2)
    {
        Value* v = executionThread.getReturnValue();
        //check right value
        if(v == NULL || v->getDataType() != Value::NUMBER)
        {
            executionThread.endExecution(NULL);
            return;
        }

        // move sprite

        //重要：为啥这里的x,y赋值方式不一样，程序的整体逻辑可能要求以这种不同的方式来获取 x 和 y 坐标，以便区分和处理不同来源、不同性质的坐标信息。例如，x 坐标可能是与某种用户输入或者外部消息传递相关联，
        //通过 ValueMessage 对象来传递和处理这种信息更加合适；
        //而 y 坐标可能是与程序内部执行流程中的某个计算结果或者操作返回值相关联

        Sprite* sprite = executionThread.getSprite();
        if(sprite != NULL) {
            int x = (int) m->getValue()->toDouble();
            int y = (int) v->toDouble();
            sprite->setPosition(QPoint(x, y));

             qDebug()<<u8"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<设置位置2";
        }
        executionThread.endExecution(NULL);
        return;
    }

    executionThread.endExecution(NULL);

    if (m!= NULL) {
        delete m;
        m = NULL;
    }
}

bool GoToPositionBlock::addParameter(Block* parameter, int index)
{
    if(index < 0 || index > 1 || parameter == NULL)
        return false;

    if(parameter->getReturnType() != Block::NUMBER_EXPRESSION && parameter->getReturnType() != Block::NUMBER_VAR)
        return false;

    if (index == 0)
    {
        _xPos = (ExpressionBlock*)parameter;
    }

    else if (index == 1)
        _yPos = (ExpressionBlock*)parameter;

    return true;
}
