#include <iostream>
using namespace std;

class Base
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;

public:

    Base()
    {
        cout << "Base���캯��" <<endl;
    }
    ~Base()
    {
        cout << "Base��������" <<endl;
    }

    void writem_C(int c)
    {
        m_C = c;
    }
    int readm_C()
    {
        return m_C;
    }
    void writem_B(int d)
    {
        m_B = d;
    }
    int readm_B()
    {
        return m_B;
    }
};



class Son : public Base
{
public:
    int m_D;

    Son()
    {
        cout << "Son���캯��" <<endl;
    }
    ~Son()
    {
        cout << "Son��������" <<endl;
    }

    void func()
    {
        m_A = 10;
        m_B = 10;     //protectedֱ�ӿ��Է���
        m_D = 10;
        //m_C = 10; //���ʲ�������
        this->writem_C(10); //ͨ��public��Ա��������
    }
};

void test01()
{
    Son s;
    // �����
    // Base���캯��
    // Son���캯��
    // Son��������
    // Base��������
    
}


 


int main()
{
    test01();

    system("pause");
    return 0;
}