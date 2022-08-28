using namespace std;
#include <iostream>



int main() {
    int (*A)[5];// 数组指针，表示指向5个int数组的指针
    cout << sizeof(A) << endl;
    cout << sizeof(*(A+1)) << endl;

    int a[5] = {1,2,3,4,5};
    cout << *(a+1) << "与" << a[1] << "等价" <<endl;
    return 0;
}