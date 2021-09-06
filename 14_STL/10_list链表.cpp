#include <iostream>
using namespace std;

#include <list>



template<typename T>
void printList(const list<T>& _list_input) 
{
	for (auto it = _list_input.begin(); it != _list_input.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}



// --------------------------- 1.list���캯�� ---------------------------
// ����ԭ�ͣ�

// list<T> lst;                       //list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
// list(beg,end);                     //���캯����[beg, end)�����е�Ԫ�ؿ���������
// list(n,elem);                      //���캯����n��elem����������
// list(const list &lst);             //�������캯����

void test01()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	list<int> L2(L1.begin(),L1.end());
	printList(L2);

	list<int> L3(L2);
	printList(L3);

	list<int> L4(10, 1000);
	printList(L4);
}


// --------------------------- 2.list��ֵ�ͽ��� ---------------------------
// ����ԭ�ͣ�

// assign(beg, end);                   //��[beg, end)�����е����ݿ�����ֵ������
// assign(n, elem);                    //��n��elem������ֵ������
// list& operator=(const list &lst);   //���صȺŲ�����
// swap(lst);                          //��lst�뱾���Ԫ�ػ�����
void test02()
{
    list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	// ��ֵ--���ַ�ʽ
	list<int>L2;
	L2 = L1;
	printList(L2);

	list<int>L3;
	L3.assign(L2.begin(), L2.end());
	printList(L3);

	list<int>L4;
	L4.assign(10, 100);
	printList(L4);

    cout << "---------------------" << endl;

    cout << "����ǰ�� " << endl;
	printList(L1);
	printList(L4);

    L1.swap(L4);
    cout << "������ " << endl;
	printList(L1);
	printList(L4);
}




// --------------------------- 3.list��С���� ---------------------------
// ����ԭ�ͣ�

// size();          		//����������Ԫ�صĸ���
// empty();        		//�ж������Ƿ�Ϊ��
// resize(num);     		//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ(0)�����λ�á�
//   ?				 		 //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
// resize(num, elem);      //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
//    						//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����

void test03()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	if (L1.empty())
	{
		cout << "L1Ϊ��" << endl;
	}
	else
	{
		cout << "L1��Ϊ��" << endl;
		cout << "L1�Ĵ�СΪ�� " << L1.size() << endl;
	}

	//����ָ����С
	L1.resize(10);
	printList(L1);

	L1.resize(2);
	printList(L1);

	L1.resize(10, 30);
	printList(L1);
}




// --------------------------- 4.list�����ɾ�� ---------------------------
// ����ԭ�ͣ�

// push_back(elem);        //������β������һ��Ԫ��
// pop_back();             //ɾ�����������һ��Ԫ��
// push_front(elem);       //��������ͷ����һ��Ԫ��
// pop_front();            //��������ͷ�Ƴ���һ��Ԫ��
// insert(pos,elem);       //��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
// insert(pos,n,elem);     //��posλ�ò���n��elem���ݣ��޷���ֵ��
// insert(pos,beg,end);    //��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
// clear();                //�Ƴ���������������
// erase(beg,end);         //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
// erase(pos);             //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
// remove(elem);           //ɾ��������������elemֵƥ���Ԫ�ء�

void test04()
{
	list<int> L;
	//β��
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	//ͷ��
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);

	printList(L);

	//βɾ
	L.pop_back();
	printList(L);

	//ͷɾ
	L.pop_front();
	printList(L);

	//����
	list<int>::iterator it = L.begin();
	L.insert(++it, 1000);
	printList(L);

	//ɾ��
	it = L.begin();
	L.erase(++it);
	printList(L);

	//�Ƴ�
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	printList(L);
	L.remove(10000);
	printList(L);
    
    //���
	L.clear();
	printList(L);
}








// --------------------------- 5.list���ݴ�ȡ ---------------------------
// ����ԭ�ͣ�

// front();       //���ص�һ��Ԫ�ء�
// back();        //�������һ��Ԫ�ء�

void test05()
{
	list<int> L1_temp;
	L1_temp.push_back(10);
	L1_temp.push_back(20);
	L1_temp.push_back(30);
	L1_temp.push_back(40);
	L1_temp.push_back(50);
	L1_temp.push_back(60);
	printList(L1_temp);

	list<int>::iterator it = L1_temp.begin();
	int count = 2;
	for (int i_temp = 1; i_temp < count; i_temp++) { it++;}
	cout << *it << endl;

	cout << L1_temp.front() << " -> " << L1_temp.back() << endl;
}





// --------------------------- 6.list��ת������ ---------------------------
// ����ԭ�ͣ�

// reverse();     //��ת����
// sort();        //��������


bool compare(int val_1, int val_2)
{
	return val_1 > val_2;
}



void test06()
{
	list<int> L1_temp;
	L1_temp.push_back(5);
	L1_temp.push_back(2);
	L1_temp.push_back(3);
	L1_temp.push_back(6);
	L1_temp.push_back(1);
	L1_temp.push_back(4);
	printList(L1_temp);

	L1_temp.reverse();
	printList(L1_temp);

	L1_temp.sort();
	printList(L1_temp);

	L1_temp.sort(compare);
	printList(L1_temp);

}





// --------------------------- 7.list������ ---------------------------
// ������򣺰�����������������������ͬ������߽��н���

class Person {
public:
	Person(string name, int age , int height) {
		m_Name = name;
		m_Age = age;
		m_Height = height;
	}

public:
	string m_Name;  
	int m_Age;      
	int m_Height;   
};


bool ComparePerson(Person& p1, Person& p2) 
{
	if (p1.m_Age == p2.m_Age) 
	{
		return p1.m_Height > p2.m_Height;
	}
	return  p1.m_Age < p2.m_Age;
}


void test07() 
{
	list<Person> L;
	Person p1("����", 35 , 175);
	Person p2("�ܲ�", 45 , 180);
	Person p3("��Ȩ", 40 , 170);
	Person p4("����", 25 , 190);
	Person p5("�ŷ�", 35 , 160);
	Person p6("����", 35 , 200);
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);


	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
		cout << "������ " << it->m_Name << " ���䣺 " << it->m_Age 
              << " ��ߣ� " << it->m_Height << endl;
	}

	cout << "---------------------------------" << endl;
	L.sort(ComparePerson); //����

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
		cout << "������ " << it->m_Name << " ���䣺 " << it->m_Age 
              << " ��ߣ� " << it->m_Height << endl;
	}
}











int main()
{
    test07();

	system("pause");
    return 0;
}