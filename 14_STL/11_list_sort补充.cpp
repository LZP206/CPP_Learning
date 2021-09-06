#include <iostream>
using namespace std;
#include <list>
#include <algorithm>



// 1.仿函数
class MYsort
{
public:
    bool operator()(int a, int b)
    {
        return a < b;
    }
};

// 2.返回值是bool_谓词
bool mysort(int a, int b)
{
    return a < b;
}


int main()
{
    list<int> l1;
    l1.push_front(16);
    l1.push_front(28);
    l1.push_front(24);
    l1.push_front(54);
    l1.push_back(35);
    l1.push_back(30);
    l1.push_back(21);
    l1.push_back(39);

    for_each(l1.begin(), l1.end(), [=](const int a){cout << a << endl;} );
    putchar('\n');




    // l1.sort(mysort);    // 两种方式都可行
    l1.sort(MYsort());
    for_each(l1.begin(), l1.end(), [=](const int a){cout << a << endl;} );
    putchar('\n');


    system("pause");
    return 0;
}
