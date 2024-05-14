#pragma once

template <typename elemType>
class Array
{
private:

    elemType *array;
    int arraySize;

public:

    Array(int size);
    ~Array();

    elemType& at(int index);
    int size();
    void print_array();
    void fill(elemType val);

};

template <typename elemType>
Array<elemType>::Array(int size) : arraySize(size) {
    array = new elemType[size];
}

template <typename elemType>
Array<elemType>::~Array() {
    delete [] array;
}

template <typename elemType>
elemType& Array<elemType>::at(int index){
    return array[index];
}

template <typename elemType>
int Array<elemType>::size(){
    return arraySize;
}

template <typename elemType>
void Array<elemType>::print_array(){
    for (int i = 0; i < arraySize; i++){
        std::cout<<array[i]<<" ";
    }
    std::cout<<std::endl;
}

template <typename elemType>
void Array<elemType>::fill(elemType val){
    for (int i = 0; i < arraySize; i++){
        array[i] = val;
    }
}
