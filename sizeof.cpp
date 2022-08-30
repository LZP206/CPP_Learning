using namespace std;
#include <iostream>

struct AAA{
    int a1;
    int a2;
    double d1;
};
struct  BBB{
    int a1;
    double d1;
    int a2;
};
struct CCC{
    short a;
    int b;
    char c;
};

struct DDD{
    short a;
    char c;
    int b;
};



class AA {
    public:
    int a;
    AA(){}
    virtual ~AA(){}
};
class BB {
    public:
    int a;
    double d;
    BB(){}
    virtual ~BB(){}
};














int main() {
    int (*A)[5];// 数组指针，表示指向5个int数组的指针
    cout << sizeof(A) << endl;
    cout << sizeof(*(A+1)) << endl;
    int a[5] = {1,2,3,4,5};
    cout << *(a+1) << "与" << a[1] << "等价" <<endl;

    AAA aaa; cout << sizeof(aaa) << endl;  // 16 = 4+4+8 内存对齐，第一个8字节里可以放两个int
    BBB bbb; cout << sizeof(bbb) << endl;  // 24 = 8+8+8
    CCC ccc; cout << sizeof(ccc) << endl;  // 12 = 4+4+4 
    DDD ddd; cout << sizeof(ddd) << endl;  // 8 = 2+2+4

    AA aa; cout << sizeof(aa) << endl;  // 16
    BB bb; cout << sizeof(bb) << endl;  // 24


    system("pause");
    return 0;
}