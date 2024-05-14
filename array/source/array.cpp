#include <iostream>
#include "array.h"

Array::Array(int size) : arraySize(size) {
    array = new int[size];
}

Array::~Array() {
    delete [] array;
}

int& Array::at(int index){
    return array[index];
}

int Array::size(){
    return arraySize;
}

void Array::print_array(){
    for (int i = 0; i < arraySize; i++){
        std::cout<<array[i]<<" ";
    }
    std::cout<<std::endl;
}
