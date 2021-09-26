/*
常用查找算法：           
-find(iterator beg, iterator end, value); 
    - 按值查找元素，找到返回第一次出现的位置迭代器，找不到返回结束迭代器位置end()
    - beg 开始迭代器
    - end 结束迭代器
    - value 查找的元素

- find_if(iterator beg, iterator end, _Pred);  
    - 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
    - beg 开始迭代器
    - end 结束迭代器
    - _Pred 函数或者谓词（返回bool类型的仿函数）

- adjacent_find    //查找相邻重复元素
- binary_search    //二分查找法
- count            //统计元素个数
- count_if         //按条件统计元素个数
*/




#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <string>


class Person
{
    public:
    Person(string NAME_IN, int AGE_IN)
    {
        this->m_Name = NAME_IN;
        this->m_Age = AGE_IN;
    }
    bool operator==(const Person & PERSON_IN)
    {
        if (this->m_Age == PERSON_IN.m_Age && this->m_Name == PERSON_IN.m_Name)
        {
            return true;
        }
        return false;
    }

    string m_Name;
    int m_Age;
};


// 重载<<需要全局函数来实现
ostream& operator<<(ostream & DATA,Person & PERSON_IN)
{
    DATA << "Name is " << PERSON_IN.m_Name << "\tAge is " << PERSON_IN.m_Age;
    return DATA;
}





//---------------------------------------------------------------------------
// 1.find
void test01()
{   
    // 内置数据类型
    vector<int> VEC_TEST;
    for (int i = 0; i < 10; i++){VEC_TEST.push_back(i+1);}
    vector<int>::iterator it = find(VEC_TEST.begin(),VEC_TEST.end(),5);
    if (it == VEC_TEST.end())
    {
        cout << "element not found" << endl;
    }
    else
    {
        cout << "element found is " << *it << endl;
    }

    cout << "----------------------------" << endl;

    // 自定义数据类型(find需要比较元素是否相等，因此需重载==)
    vector<Person> VEC_PERSON;
    VEC_PERSON.push_back(Person("aaa",10));
    VEC_PERSON.push_back(Person("bbb",20));
    VEC_PERSON.push_back(Person("ccc",30));
    VEC_PERSON.push_back(Person("ddd",40));
    Person TAGET = Person("bbb",20);
    vector<Person>::iterator it_Person = find(VEC_PERSON.begin(),VEC_PERSON.end(),TAGET);
    if (it_Person == VEC_PERSON.end())
    {
        cout << "element not found" << endl;
    }
    else
    {
        cout << "element found: " << *it_Person << endl;
    }
}



//---------------------------------------------------------------------------
// 2.find_if
class is_Greater_than_Five
{
    public:
    bool operator()(const int & VAL_COMPARE)
    {
        return VAL_COMPARE > 5;
    }
};
class is_Age_Greater20
{
    public:
    bool operator()(const Person & PER_COMPARE)
    {
        return PER_COMPARE.m_Age > 20;
    }
};

void test02()
{
    // 内置数据类型
    vector<int> VEC_INT;
    for (int i = 0; i < 10; i++){VEC_INT.push_back(i);}
    vector<int>::iterator it = find_if(VEC_INT.begin(),VEC_INT.end(),is_Greater_than_Five());
    if (it == VEC_INT.end())
    {
        cout << "element not found" << endl;
    }
    else
    {
        cout << "element found: " << *it << endl;
    }

    cout << "----------------------------" << endl;

    // 自定义数据类型
    vector<Person> VEC_PERSON;
    VEC_PERSON.push_back(Person("aaa",10));
    VEC_PERSON.push_back(Person("bbb",20));
    VEC_PERSON.push_back(Person("ccc",30));
    VEC_PERSON.push_back(Person("ddd",40));
    vector<Person>::iterator it_Person = find_if(VEC_PERSON.begin(),VEC_PERSON.end(),is_Age_Greater20());
    if (it_Person == VEC_PERSON.end())
    {
        cout << "element not found" << endl;
    }
    else
    {
        while (it_Person != VEC_PERSON.end())
        {
            cout << "element found: " << *it_Person << endl;
            it_Person++;
        }
    }
}















//---------------------------------------------------------------------------
int main()
{
    test02();
    system("pause");
    return 0;
}