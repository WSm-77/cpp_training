#include "array.h"

Array::Array(int size) : arraySize(size) {}

Array::~Array() {}

int& Array::at(int index){
    return array[index];
}

int Array::size(){
    return arraySize;
}
