#pragma once
#ifndef myTemplate
    #define myTemplate template <typename elementType>
#endif

myTemplate
class StackElement
{
public:
    /**
     * @brief value of single element in Stack
    */
    elementType m_value;

    /**
     * @brief pointer to previouse element in stack (element below)
    */
    StackElement<elementType> *m_previousElement;

public:
    /**
     * @brief class constructor; sets value and pointer to previous element
     * 
     * @param       value vlaue of element
     * @param       previousElement pointer to previous element on stack
    */
    StackElement(elementType value, StackElement *previousElement);

    /**
     * @brief class destructor
    */
    ~StackElement() = default;

    /**
     * @brief adds element to the top of the stack
     * 
     * @param       value value
     * @param       newElement pointer to Stack::m_topElement
    */
    void emplace(elementType value, StackElement **newElement);

    /**
     * @brief removes this element
     * 
     * @param       elementToBeRemoved Stack::m_topElement
    */
    void remove(StackElement **elementToBeRemoved);

    /**
     * @brief returns value of this element
     * 
     * @returns m_value
    */
    elementType getValue();
};

myTemplate
class Stack
{
public:
// private:
    /**
     * @brief pointer to the top element
    */
    StackElement<elementType> *m_topElement;

public:
    /**
     * @brief class constructor
    */
    Stack();

    /**
     * @brief class destructor
    */
    ~Stack();

    /**
     * @brief adds element to the top of the stack
     * 
     * @param       value value of element
    */
    void emplace(elementType value);

    /**
     * @brief returns top element of the stack
    */
    elementType top();

    /**
     * @brief this method removes top element
     * @returns top element value
    */
    elementType pop();

    /**
     * @brief this method removes whole stack
    */
    void remove();
};

/*==================*\
* Class StackElement *
\*==================*/

myTemplate
StackElement<elementType>::StackElement(elementType value, StackElement *previousElement)
    :   m_previousElement(previousElement),
        m_value(value)
{ 
}

myTemplate
void StackElement<elementType>::emplace(elementType value, StackElement **newElement)
{
    *newElement = new StackElement<elementType>(value, this);
}

myTemplate
void StackElement<elementType>::remove(StackElement **elementToBeRemoved)
{
    *elementToBeRemoved = m_previousElement;

    delete this;
}

myTemplate
elementType StackElement<elementType>::getValue()
{
    return m_value;
}

/*===========*\
* Class Stack *
\*===========*/

myTemplate
Stack<elementType>::Stack()
    :   m_topElement(nullptr)
{
}

myTemplate
Stack<elementType>::~Stack()
{
    this->remove();
}

myTemplate
void Stack<elementType>::emplace(elementType value)
{
    m_topElement->emplace(value, &m_topElement);
}

myTemplate
elementType Stack<elementType>::top()
{
    if(nullptr != m_topElement)
    {
        return m_topElement->getValue();
    }
    else
    {
        std::cout<<std::endl<<"Stack is empty!!!"<<std::endl;

        return 0;
    }
}

myTemplate
elementType Stack<elementType>::pop()
{
    elementType valueOfTopElement = 0;

    if(nullptr != m_topElement)
    {
        valueOfTopElement = m_topElement->getValue();
        m_topElement->remove(&m_topElement);
    }
    else
    {
        std::cout<<std::endl<<"Stack is empty!!!"<<std::endl;
    }

    return valueOfTopElement;
}

myTemplate
void Stack<elementType>::remove()
{
    while(nullptr != m_topElement)
    {
        m_topElement->remove(&m_topElement);
    }
}