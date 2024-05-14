#include <iostream>
#include "array.h"

int main(){
    int arrayInitSize;

    std::cout<<"enter initial array size: ";
    std::cin>>arrayInitSize;

    Array<int> myIntArray(arrayInitSize);
    Array<double> myDoubleArray(arrayInitSize);
    Array<std::string> myStringArray(arrayInitSize);

    myIntArray.fill(7);
    myDoubleArray.fill(3.14);
    myStringArray.fill("alice");

    std::cout<<"values in my array before change:\t"<<std::endl;
    myIntArray.print_array();
    myDoubleArray.print_array();
    myStringArray.print_array();

    if (1 < myIntArray.size()){
        myIntArray.at(1) = 3;
        myDoubleArray.at(1) = 2.71;
        myStringArray.at(1) = "bob";
    }

    std::cout<<std::endl<<"values in my array after change:\t"<<std::endl;
    myIntArray.print_array();
    myDoubleArray.print_array();
    myStringArray.print_array();

    return 0;
}