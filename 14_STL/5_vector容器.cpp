#include <iostream>
using namespace std;

#include <vector>

void printVector(vector<int>& v) 
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) 
    {
		cout << *it << " ";
	}
	cout << endl;
}



// ----------------------1.vector构造函数----------------------

// 函数原型：

// vector<T> v;               		     //采用模板实现类实现，默认构造函数
// vector(v.begin(), v.end());          //将v[begin(), end())区间中的元素拷贝给本身。
// vector(n, elem);                     //构造函数将n个elem拷贝给本身。
// vector(const vector &vec);           //拷贝构造函数。

void test01()
{
	vector<int> v1; //无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int> v2(v1.begin(), v1.end());
	printVector(v2);

	vector<int> v3(10, 100);
	printVector(v3);
	
	vector<int> v4(v3);
	printVector(v4);
}





// ----------------------2.vector赋值操作----------------------

// 函数原型：

// vector& operator=(const vector &vec);  //重载等号操作符
// assign(beg, end);                      //将[beg, end)区间中的数据拷贝赋值给本身。
// assign(n, elem);                       //将n个elem拷贝赋值给本身。

void test02()
{
	vector<int> v1; //无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int>v2;
	v2 = v1;
	printVector(v2);

	vector<int>v3;
	v3.assign(v1.begin(), v1.end()-1);
	printVector(v3);

	vector<int>v4;
	v4.assign(10, 100);
	printVector(v4);
}



// ----------------------3.vector容量和大小----------------------

// 函数原型：

// empty();                       //判断容器是否为空
// capacity();                    //容器的容量
// size();                        //返回容器中元素的个数
// resize(int num);               //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
// resize(int num, elem);         //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//                                //如果容器变短，则末尾超出容器长度的元素被删除

void test03()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1的容量 = " << v1.capacity() << endl;
		cout << "v1的大小 = " << v1.size() << endl;
	}

	//resize 重新指定大小 ，若指定的更大，默认用0填充新位置，可以利用重载版本替换默认填充
	v1.resize(15,10);
	printVector(v1);

	//resize 重新指定大小 ，若指定的更小，超出部分元素被删除
	v1.resize(5);
	printVector(v1);
}





// ----------------------4.vector插入和删除----------------------

// 函数原型：

// push_back(ele);                                          //尾部插入元素ele
// pop_back();                                              //删除最后一个元素
// insert(const_iterator pos, ele);                         //迭代器指向位置pos插入元素ele
// insert(const_iterator pos, int count,ele);               //迭代器指向位置pos插入count个元素ele
// erase(const_iterator pos);                               //删除迭代器指向的元素
// erase(const_iterator start, const_iterator end);         //删除迭代器从start到end之间的元素
// clear();                                                 //删除容器中所有元素

void test04()
{
	vector<int> v1;
	//尾插
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printVector(v1);
	//尾删
	v1.pop_back();
	printVector(v1);
	//插入
	v1.insert(v1.begin(), 100);
	printVector(v1);

	v1.insert(v1.begin(), 2, 1000);
	printVector(v1);

	//删除
	v1.erase(v1.begin());
	printVector(v1);

	//清空
	v1.erase(v1.begin(), v1.end());
	v1.clear();
	printVector(v1);
}





// ----------------------5.vector数据存取----------------------

// 函数原型：

// at(int idx);     //返回索引idx所指的数据
// operator[];      //返回索引idx所指的数据
// front();         //返回容器中第一个数据元素
// back();          //返回容器中最后一个数据元素

void test05()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << "v1的第一个元素为： "  << v1.front() << endl;
	cout << "v1的最后一个元素为： " << v1.back() << endl;
}






// ----------------------6.vector互换容器----------------------

// 函数原型：

// swap(vec);  // 将vec与本身的元素互换

void test06()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);

	//互换容器
	cout << "互换后" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);


    cout << "-------------------------" << endl;

    vector<int> v;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
	}

	cout << "v的容量为：" << v.capacity() << endl;    // 131072
	cout << "v的大小为：" << v.size() << endl;        // 100000

	v.resize(3);

	cout << "v的容量为：" << v.capacity() << endl;    // 131072
	cout << "v的大小为：" << v.size() << endl;        // 3

	//收缩内存
	vector<int>(v).swap(v); //匿名对象

	cout << "v的容量为：" << v.capacity() << endl;   // 3
	cout << "v的大小为：" << v.size() << endl;       // 3
}




// ----------------------7.vector预留空间----------------------

// 函数原型：

// reserve(int len);    //容器预留len个元素长度，预留位置不初始化，元素不可访问。

void test07()
{
	vector<int> v;

	//预留空间
	v.reserve(100000);

	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++) 
	{
		v.push_back(i);
		if (p != &v[0]) 
		{
			p = &v[0];
			num++;
		}
	}

	cout << "num:" << num << endl;
}




// ----------------------mian()----------------------

int main()
{
    test07();
    return 0;
}