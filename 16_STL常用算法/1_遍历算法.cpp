/*
常用遍历算法：

- for_each(iterator beg, iterator end, _func);  `
    - beg 开始迭代器
    - end 结束迭代器
    - _func 函数或者函数对象

- transform()
*/




#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>



//---------------------------------------------------------------------------
// for_each
void Print01(int VAL_INPUT){cout << VAL_INPUT << " ";}
class Print02
{
    public:
    void operator()(int VAL_INPUT){cout << VAL_INPUT << " ";}
};

void test01()
{
    vector<int> VEC_TEST;
    for (int i = 0; i < 10; i++){VEC_TEST.push_back(i);}
    for_each(VEC_TEST.begin(),VEC_TEST.end(),Print01);
    cout << endl;
    for_each(VEC_TEST.begin(),VEC_TEST.end(),Print02());
}





//---------------------------------------------------------------------------
// transform
void test02()
{
    vector<int> VEC
}





//---------------------------------------------------------------------------
int main()
{
    test01();
    return 0;
}