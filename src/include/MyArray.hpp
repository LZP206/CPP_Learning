#pragma once
#include <iostream>
using namespace std;


template<typename T>
class MyArray
{
private:
    T * pAddress;
    int m_Capacity;
    int m_Size;
public:
    MyArray(int capacity);
    ~MyArray();
};


template<typename T>
MyArray<T>::MyArray(int capacity)
{
    this->m_Capacity = capacity;
    this->m_Size = 0;
    this->pAddress = new T[this->m_Capacity];
}


template<typename T>
MyArray<T>::~MyArray()
{
    if (this->m_Capacity != NULL)
    {
        delete[] this->m_Capacity;
        this->m_Capacity = NULL;
    }
    
}
