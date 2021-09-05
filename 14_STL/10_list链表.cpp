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



// --------------------------- 1.list构造函数 ---------------------------
// 函数原型：

// list<T> lst;                       //list采用采用模板类实现,对象的默认构造形式：
// list(beg,end);                     //构造函数将[beg, end)区间中的元素拷贝给本身。
// list(n,elem);                      //构造函数将n个elem拷贝给本身。
// list(const list &lst);             //拷贝构造函数。

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


// --------------------------- 2.list赋值和交换 ---------------------------
// 函数原型：

// assign(beg, end);                   //将[beg, end)区间中的数据拷贝赋值给本身。
// assign(n, elem);                    //将n个elem拷贝赋值给本身。
// list& operator=(const list &lst);   //重载等号操作符
// swap(lst);                          //将lst与本身的元素互换。
void test02()
{
    list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	// 赋值--三种方式
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

    cout << "交换前： " << endl;
	printList(L1);
	printList(L4);

    L1.swap(L4);
    cout << "交换后： " << endl;
	printList(L1);
	printList(L4);
}






int main()
{
    test02();
    return 0;
}