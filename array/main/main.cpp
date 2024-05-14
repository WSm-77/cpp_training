#include <iostream>
#include "array.h"

int main(){
    Array myArray(2);

    for (int i = 0; i < myArray.size(); i++){
        myArray.at(i) = 7;
    }

    std::cout<<"values in my array before change:\t"<<myArray.at(0)<<" "<<myArray.at(1)<<std::endl;

    myArray.at(1) = 3;

    std::cout<<"values in my array after change:\t"<<myArray.at(0)<<" "<<myArray.at(1)<<std::endl;

    return 0;
}