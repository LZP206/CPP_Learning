#include <iostream>
using namespace std;


template<typename T>
void myswap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}



int main()
{
    int a = 10;
    int b = 20;
    myswap<int>(a,b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}