#include <iostream>
#include "add.hpp"
#include "factorial.hpp"

using std::cout;
using std::endl;

int main(){
    int num1 = 3, num2 = 4;

    cout<<num1<<" + " <<num2<<" = "<<add(num1, num2)<<endl;
    cout<<num1<<"!" <<" = "<<factorial(num1)<<endl;
    cout<<num2<<"!" <<" = "<<factorial(num2)<<endl;

    return 0;
}