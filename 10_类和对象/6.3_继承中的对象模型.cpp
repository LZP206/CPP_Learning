#include <iostream>
using namespace std;

// ������˽�г�ԱҲ�Ǳ�����̳���ȥ�ˣ�ֻ���ɱ����������غ���ʲ���

// ���ÿ�����Ա������ʾ���߲鿴����ģ�ͣ�
// �򿪹��ߴ��ں�
// 1. ��λ����ǰCPP�ļ����̷� `D:` ���س�
// 2. ����`cd {�ļ�·��}`
// 3. ����`dir`�鿴·��Ŀ¼
// 4. Ȼ������ `cl /d1 reportSingleClassLayout{�鿴������} {�����ļ���}`

class Base
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;

public:
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
    cout << "size of Son = " << sizeof(Son) << endl;
    //���Ϊ==16==�������������еķǾ�̬��Ա�������ᱻ����̳У�
    //�����е�˽�г�Ա�����������أ���˷��ʲ��������ᱻ�̳У�

    Son s1;
    s1.writem_C(20);
    cout << "m_C = " << s1.readm_C() << endl;
    
    s1.func();
    cout << "m_A = " << s1.m_A << endl;
    cout << "m_B = " << s1.readm_B() << endl;  //protected��private��Ա������ʱ���ͨ��public��Ա����
    cout << "m_C = " << s1.readm_C() << endl;
    cout << "m_D = " << s1.m_D << endl;
}




int main()
{
    test01();

    system("pause");
    return 0;
}