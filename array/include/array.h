#pragma once

class Array
{
private:

    int array[10];
    int arraySize;
    
public:

    Array(int size);
    ~Array();

    int& at(int index);
    int size();

};
