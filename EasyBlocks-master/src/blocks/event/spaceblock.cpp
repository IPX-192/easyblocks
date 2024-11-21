#include "spaceblock.h"

#include "../../executionhandler.h"
#include "../../statementblock.h"
#include "../../programmodel.h"


void SpaceBlock::sendSignal(const Signal& signal, Sprite* sprite)
{
    //check pointer and type of signal
    if(sprite == NULL || signal.getType() != Signal::SPACE)
        return;

    //run statements
    //是这个类发起的增加物块，现在有个问题是设置这个下一个物块只有一次，不过是无数次获取，是怎么把里面的参数拿出来一直用的
    sprite->getProgramModel()->getExecutionHandler()->addExecutionThread(getStatement(), sprite->getVarTable(), sprite);
}
