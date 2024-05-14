#include <iostream>
#include <myStack.h>

int main()
{

    std::cout<<"######### int stack #########\n\n"<<std::endl;

    Stack<int> m_stack;

    m_stack.emplace(2);
    std::cout<<"top element: "<<m_stack.top()<<std::endl;
    m_stack.emplace(3);
    std::cout<<"top element: "<<m_stack.top()<<std::endl;
    m_stack.emplace(1);
    std::cout<<"top element: "<<m_stack.top()<<std::endl;
    auto top = m_stack.pop();
    std::cout<<"top element: "<<top<<std::endl;
    top = m_stack.pop();
    std::cout<<"top element: "<<top<<std::endl;
    top = m_stack.pop();
    std::cout<<"top element: "<<top<<std::endl;
    std::cout<<"top element: "<<m_stack.top()<<std::endl;
    top = m_stack.pop();

    std::cout<<"\n\n######### float stack #########\n\n"<<std::endl;

    Stack<float> second_stack;

    float floatTop;
    second_stack.emplace(2.1);
    std::cout<<"Top element: "<<second_stack.top()<<std::endl;
    second_stack.emplace(5.2);
    std::cout<<"Top element: "<<second_stack.top()<<std::endl;
    second_stack.emplace(1.6);
    std::cout<<"Top element: "<<second_stack.top()<<std::endl;
    floatTop = second_stack.pop();
    std::cout<<"Pop element: "<<floatTop<<std::endl;
    floatTop = second_stack.pop();
    std::cout<<"Pop element: "<<floatTop<<std::endl;
    floatTop = second_stack.pop();
    std::cout<<"Pop element: "<<floatTop<<std::endl;

    return 0;
}