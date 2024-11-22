#include "valuemessage.h"

#include <QDebug>

ValueMessage::~ValueMessage()
{
    if(_value != NULL)
        delete _value;
}

//说明
void ValueMessage::setValue(Value* value)
{
    if(_value != NULL)
        delete _value;
    _value = value;
}
