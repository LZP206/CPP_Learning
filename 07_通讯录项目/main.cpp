#include <iostream>
using namespace std;
#include <string>
#define MAX 1000


//��ϵ�˽ṹ��
struct Person
{
    string Name;
    int Sex; //��1  Ů0
    int Age;
    string Phone;
    string Addr;
};
//ͨѶ¼�ṹ��
struct addressBooks
{
    Person personArray[MAX];
    int Size;
};


//�˵�����
void showMenu()
{
    cout << "***************************" << endl;
    cout << "*****  1�������ϵ��  *****" << endl;
    cout << "*****  2����ʾ��ϵ��  *****" << endl;
    cout << "*****  3��ɾ����ϵ��  *****" << endl;
    cout << "*****  4��������ϵ��  *****" << endl;
    cout << "*****  5���޸���ϵ��  *****" << endl;
    cout << "*****  6�������ϵ��  *****" << endl;
    cout << "*****  0���˳�ͨѶ¼  *****" << endl;
    cout << "***************************" << endl;
}


//1�������ϵ����Ϣ
void addPerson(addressBooks* abs)
{
    if (abs->Size == MAX)
    {
        cout << "ͨѶ¼�������޷����" << endl;
    }
    else
    {
        //����
        string name;
        cout << "������������" << endl;
        cin >> name;
        abs->personArray[abs->Size].Name = name;

        //�Ա�
        cout << "�������Ա�" << endl;
        cout << "1 -- ��" << endl;
        cout << "0 -- Ů" << endl;
        int sex;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 0)
            {
                abs->personArray[abs->Size].Sex = sex;
                break;
            }
            cout << "������������������";
        }

        //����
        cout << "���������䣺" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->Size].Age = age;

        //��ϵ�绰
        cout << "��������ϵ�绰��" << endl;
        string phone;
        cin >> phone;
        abs->personArray[abs->Size].Phone = phone;

        //��ͥסַ
        cout << "�������ͥסַ��" << endl;
        string address;
        cin >> address;
        abs->personArray[abs->Size].Addr = address;

        //����ͨѶ¼����
        abs->Size++;
        cout << "��ӳɹ�" << endl;
    }

    cout << "���������س�����...";
    cin.ignore(1024, '\n'); cin.get();
    system("clear");
}


//2����ʾ������ϵ����Ϣ
void showPerson(addressBooks* abs)
{
    if (abs->Size == 0)
    {
        cout << "��ǰ��¼Ϊ��" << endl;
    }
    else
    {
        for (int i = 0; i < abs->Size; i++)
        {
            cout << "������" << abs->personArray[i].Name << "\t";
            cout << "�Ա�" << (abs->personArray[i].Sex == 1 ? "��" : "Ů") << "\t";
            cout << "���䣺" << abs->personArray[i].Age << "\t";
            cout << "�绰��" << abs->personArray[i].Phone << "\t";
            cout << "סַ��" << abs->personArray[i].Addr << endl;
        }
    }

    cout << "���������س�����...";
    cin.ignore(1024, '\n'); cin.get();
    system("clear");
}


// �������ж���ϵ���Ƿ����
int ifExist(addressBooks* abs, const string& name)
{
    for (int i = 0; i < abs->Size; i++)
    {
        if (abs->personArray[i].Name == name)
        {
            return i;
        }
    }
    return -1;
}


//3��ɾ��ָ����ϵ�˺���
void deletePerson(addressBooks* abs)
{
    cout << "��������Ҫɾ������ϵ��" << endl;
    string name;
    cin >> name;

    int ret = ifExist(abs, name);
    if (ret != -1)
    {
        for (int i = ret; i < abs->Size; i++)
        {
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->Size--;
        cout << "ɾ���ɹ�" << endl;
    }
    else
    {
        cout << "���޴���" << endl;
    }

    cout << "���������س�����...";
    cin.ignore(1024, '\n'); cin.get();
    system("clear");
}


//4������ָ����ϵ�˺���
void findPerson(addressBooks* abs)
{
    cout << "��������Ҫ���ҵ���ϵ��" << endl;
    string name;
    cin >> name;

    int ret = ifExist(abs, name);
    if (ret != -1)
    {
        cout << "������" << abs->personArray[ret].Name << "\t";
        cout << "�Ա�" << (abs->personArray[ret].Sex == 1 ? "��" : "Ů") << "\t";
        cout << "���䣺" << abs->personArray[ret].Age << "\t";
        cout << "�绰��" << abs->personArray[ret].Phone << "\t";
        cout << "סַ��" << abs->personArray[ret].Addr << "\t" << endl;
    }
    else
    {
        cout << "���޴���" << endl;
    }

    cout << "���������س�����...";
    cin.ignore(1024, '\n'); cin.get();
    system("clear");
}


//5���޸�ָ����ϵ����Ϣ  ���˺������ԸĽ����޸ĵ���������Phone��
void modifyPerson(addressBooks* abs)
{
    cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
    string name;
    cin >> name;

    int ret = ifExist(abs, name);
    if (ret != -1)
    {
        //����
        cout << "������������" << endl;
        cin >> name;
        abs->personArray[ret].Name = name;

        //�Ա�
        cout << "�������Ա�" << endl;
        cout << "1 -- ��" << endl;
        cout << "0 -- Ů" << endl;
        int sex;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[ret].Sex = sex;
                break;
            }
            cout << "������������������";
        }

        //����
        cout << "���������䣺" << endl;
        int age;
        cin >> age;
        abs->personArray[ret].Age = age;

        //��ϵ�绰
        cout << "��������ϵ�绰��" << endl;
        string phone;
        cin >> phone;
        abs->personArray[ret].Phone = phone;

        //��ͥסַ
        cout << "�������ͥסַ��" << endl;
        string address;
        cin >> address;
        abs->personArray[ret].Addr = address;

        cout << "�޸ĳɹ�" << endl;
    }
    else
    {
        cout << "���޴���" << endl;
    }

    cout << "���������س�����...";
    cin.ignore(1024, '\n'); cin.get();
    system("clear");
}


//6�����������ϵ��
void cleanPerson(addressBooks* abs)
{
    abs->Size = 0;
    cout << "ͨѶ¼�����" << endl;
    cout << "���������س�����...";
    cin.ignore(1024, '\n'); cin.get();
    system("clear");
}




int main() {
    addressBooks abs;
    abs.Size = 0;

    int select;

    while (true)
    {
        showMenu();
        cin >> select;

        switch (select)
        {
        case 1:  //�����ϵ��
            addPerson(&abs);
            break;
        case 2:  //��ʾ��ϵ��
            showPerson(&abs);
            break;
        case 3:  //ɾ����ϵ��
            deletePerson(&abs);
            break;
        case 4:  //������ϵ��
            findPerson(&abs);
            break;
        case 5:  //�޸���ϵ��
            modifyPerson(&abs);
            break;
        case 6:  //�����ϵ��
            cleanPerson(&abs);
            break;
        case 0:  //�˳�ͨѶ¼
            cout << "��ӭ�´�ʹ��" << endl;
            return 0; // ������ѭ��
        default:
            break;
        }

    }

    system("pause");
    return 0;

}
