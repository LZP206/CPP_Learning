#pragma once
#include <iostream>
using namespace std;

// 数组类模板要求
// * 可以对内置数据类型以及自定义数据类型的数据进行存储
// * 将数组中的数据存储到堆区
// * 构造函数中可以传入数组的容量
// * 提供对应的拷贝构造函数以及operator=防止浅拷贝问题
// * 提供尾插法和尾删法对数组中的数据进行增加和删除
// * 可以通过下标的方式访问数组中的元素
// * 可以获取数组中当前元素个数和数组的容量




template<typename T>
class MyArray
{
private:
    T * pAddress;
    int m_Capacity;
    int m_Size;
public:
    MyArray(int capacity);
    MyArray<T>::MyArray(const MyArray & arr);
    ~MyArray();

    // 重载 = 
    MyArray & operator=(const MyArray & arr)
    {
        if (this->m_Capacity != NULL)
        {
            delete[] this->m_Capacity;
            this->m_Capacity = NULL;
            this->m_Size = 0;
            this->m_Capacity = 0;
        }
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        this->m_Capacity = new T[this->m_Size];
        for (int i = 0; i < this->m_Size; i++)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;
    }

    // 重载【】
    T & operator[](int index)
    {
        return this->pAddress[index];
    }

    // 尾插法
    void push_Back(const T & val)
    {
        if (this->m_Capacity == this->m_Size)
        {
            return;
        }
        this->pAddress[this->m_Size] = val;
        this->m_Size++;
        
    }

    // 尾删法
    void pop_Back()
    {
        if (this->m_Size == 0)
        {
            return;
        }
        this->m_Size--;
    }

    // 获取数组大小
    int getArrSize()
    {
        return this->m_Size;
    }
    
    // 获取数组容量
    int getArrCapacity()
    {
        return this->m_Capacity;
    }


};



// 有参构造
template<typename T>
MyArray<T>::MyArray(int capacity)
{
    this->m_Capacity = capacity;
    this->m_Size = 0;
    this->pAddress = new T[this->m_Capacity];
}

// 拷贝构造
template<typename T>
MyArray<T>::MyArray(const MyArray & arr)
{
    this->m_Capacity = arr.m_Capacity;
    this->m_Size = arr.m_Size;
    this->pAddress = new T[arr.m_Capacity];
    for (int i = 0; i < this->m_Size; i++)
    {
        this->pAddress[i] = arr.pAddress[i];
        // =：  普通类型数据可以直接=赋值   指针类型需要深拷贝
        // 如果T为对象，而且还包含指针，必须需要重载 = 操作符，因为这个等号不是 构造 而是赋值，
    }
    
}


// 析构函数
template<typename T>
MyArray<T>::~MyArray()
{
    if (this->m_Capacity != NULL)
    {
        delete[] this->m_Capacity;
        this->m_Capacity = NULL;
        this->m_Size = 0;
        this->m_Capacity = 0;
    }
    
}
