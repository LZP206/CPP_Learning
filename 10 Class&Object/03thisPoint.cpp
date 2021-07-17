#include <iostream>
using namespace std;


// 1.成员变量和成员函数分开存储
class Person{
public:
    int m_A;       //只有非静态成员变量占对象空间！！
    static int m_B;//静态成员变量不占对象空间

    Person(){
        m_A = 0;
    }
    //函数也不占对象空间，所有函数共享一个函数实例
    void func(){
        cout << "m_A:" << this->m_A << endl;
    }
    //静态成员函数也不占对象空间
    static void func2() {}
};
int Person::m_B = 10;
void test01(){
    Person p;
    cout << "size of p = " << sizeof(p) << endl;
    //空对象占用的内存空间为 1byte , 是为了区分不同空对象占空间的位置
}






// 2.this指针概念
class Person2{
public:
    int age;

    Person2(int age){
        //this指针用途一：当形参和成员变量同名时，可用this指针来区分
        this->age = age;
    }

    Person2& PersonAddPerson(Person2 p)
    {
        this->age += p.age;
        //用途2：返回对象本身
        return *this;
    }


};
void test02(){
    Person2 p(10);
    cout << "p的年龄为" << p.age << endl;

    Person2 p2(20);
    p2.PersonAddPerson(p).PersonAddPerson(p).PersonAddPerson(p);
    cout << "p2.age = " << p2.age << endl;
}








// 3.空指针访问成员函数
class Person3{
public:
    int m_Age;

    void ShowClassName(){
        cout << "this is a Person3 class" << endl;
    }
    //C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
    void ShowPersonAge(){
        if (this == nullptr){return;}
        //如果用到this指针，需要加以判断保证代码的健壮性
        cout << "PersonAge = " << this->m_Age << endl;
    }

};
void test03(){
    Person3 * p = nullptr;
    p->ShowClassName();
    p->ShowPersonAge();

}



// 4.const修饰成员函数
class Person4{
public:
    void showPeron() const {
        //m_A = 100;会报错，常函数内不可以修改成员属性
        //原因：m_A = 100 相当于 this->m_A = 100
        //this指针不能修改指向，但可以修改指向内存的值，加上const后不能修改，相当于一个双const指针

        this->m_B = 100;
    }

    void MyFunc(){
        this->m_A = 100;
    }

    int m_A;
    mutable int m_B;//特殊变量，在常函数（或常对象）中也可修改
};
void test04(){
    const Person4 p{}; //创建常对象
    //p.m_A = 100;//常对象不能修改成员变量的值,但是可以访问
    p.m_B = 100;  //但是常对象可以修改mutable修饰成员变量

    //常对象只能访问常函数
    p.showPeron();

    //p.MyFunc(); 
    //常对象不能调用普通成员函数，因为普通成员可以修改成员属性，而常对象不能修改，矛盾
}







int main(){
    // 1.成员变量和成员函数分开存储
    //test01();

    // 2.this指针概念
    //test02();

    // 3.空指针访问成员函数
    //test03();



    return 0;
}

