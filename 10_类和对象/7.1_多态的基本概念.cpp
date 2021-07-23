#include <iostream>
using namespace std;



class Animal
{
public:
    // �麯��
    virtual void speak()
    {
        cout << "������˵��" << endl;
    }
};


class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Сè��˵��" << endl;
    }
};

class Dog : public Animal
{
    void speak()
    {
        cout << "С����˵��" << endl;
    }
};



// ������ַ��󶨣��ڱ���׶ξ��Ѿ�ȷ��������ַ
// �����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣�����ַ���
void doSpeak(Animal &animal)   // ��̬��ʹ�ã�����ָ�������ָ���������
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat); //c++��ʵ�ָ������Զ�ת��

    Dog dog;
    doSpeak(dog);

    Animal animal;
    doSpeak(animal);
}

void test02()
{
    cout << "sizeof(Animal) = " << sizeof(Animal) <<endl;  
    // ����virtual���Ϊ1 ���� ��ʾ�ն���
    // ��virtual���Ϊ4(32λ)��8(64λ) ������ �麯������ ��ָ��

}




int main()
{
    //test01();
    test02();

    system("pause");
    return 0;
}