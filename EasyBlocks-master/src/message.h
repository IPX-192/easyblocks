#ifndef MESSAGE_H
#define MESSAGE_H

/**
 * @brief The Message class
 *
 * @author Brecht Vandevoort
 * 说明：这个message类是空类。意义在于定义的虚析构函数？当这个类可能会作为基类被其他类继承时，虚析构函数能保证在通过基类指针删除派生类对象时，能够正确地调用派生类的析构函数
 */
class Message
{
public:
    /**
     * @brief Constructor
     */
    Message() {}

    /**
     * @brief Destructor
     */
    virtual ~Message() {}
};

#endif // MESSAGE_H
