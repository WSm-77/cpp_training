#include <iostream>
#include "array.h"

int main(){
    int arrayInitSize;

    std::cout<<"enter initial array size: ";
    std::cin>>arrayInitSize;

    Array myArray(arrayInitSize);

    for (int i = 0; i < myArray.size(); i++){
        myArray.at(i) = 7;
    }

    std::cout<<"values in my array before change:\t"<<std::endl;
    myArray.print_array();

    myArray.at(1) = 3;

    std::cout<<"values in my array after change:\t"<<std::endl;
    myArray.print_array();

    return 0;
}