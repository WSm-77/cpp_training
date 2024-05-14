#pragma once

class Array
{
private:

    int *array;
    int arraySize;

public:

    Array(int size);
    ~Array();

    int& at(int index);
    int size();
    void print_array();

};
