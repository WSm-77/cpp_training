#pragma once
#include <iostream>

template <typename elemType>
class Array
{
private:

    elemType *array;
    int arraySize;

public:

    Array(int size) : arraySize(size){
        array = new elemType[size];
    }

    ~Array(){
        delete [] array;
    }

    elemType& at(int index){
        return array[index];
    }

    int size(){
        return arraySize;
    }

    void print_array(){
        for (int i = 0; i < arraySize; i++){
            std::cout<<array[i]<<" ";
        }
        std::cout<<std::endl;
    }

    void fill(elemType val){
        for (int i = 0; i < arraySize; i++){
            at(i) = val;
        }
    }

};