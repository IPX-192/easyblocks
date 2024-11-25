#include "numberassignment.h"
#include <QDebug>
#include "../../executionthread.h"
#include "../../intmessage.h"

NumberAssignment::~NumberAssignment()
{
    if(_variable != NULL)
        delete _variable;
    if(_expression != NULL)
        delete _expression;
}

QList<Block::ParamType> NumberAssignment::getParamTypes() const
{
    QList<Block::ParamType> params;
    params.append(Block::NUMBER_VAR);
    params.append(Block::NUMBER_EXPRESSION);
    return params;
}

void NumberAssignment::executeNextStep(ExecutionThread& executionThread) const
{
    if(_variable == NULL || _expression == NULL)
    {
        executionThread.endExecution(NULL);
        return;
    }

    IntMessage* m = (IntMessage*)executionThread.getMessage();
    if(m == NULL)
    {
        m = new IntMessage(0);
        executionThread.setMessage(m);
    }

    if(m->getValue() == 0)
    {
        executionThread.setNextBlock(_expression);
        m->setValue(1);
        return;
    }

    if(m->getValue() == 1)
    {
        Value* rv = executionThread.getReturnValue();
        //这个是精灵的属性赋值的
        if(rv != NULL && executionThread.getVarTable() != NULL)
            _variable->setValue(rv->copy(), *executionThread.getVarTable());

        qDebug()<<u8"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<设置数字累加";

        executionThread.endExecution(NULL);
        return;
    }

    executionThread.endExecution(NULL);
    return;
}

//看这个
bool NumberAssignment::addParameter(Block* parameter, int index)
{
    if(parameter == NULL)
        return false;

    if(index == 0 && parameter->getReturnType() == Block::NUMBER_VAR) {
        _variable = (VarBlock*)parameter;
        return true;
    }

    if(index == 1 && (parameter->getReturnType() == Block::NUMBER_EXPRESSION || parameter->getReturnType() == Block::NUMBER_VAR))
    {
        _expression = (ExpressionBlock*)parameter;
        return true;
    }

    return false;
}
