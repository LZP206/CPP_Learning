#include <iostream>
using namespace std;

#include <string>



// ------------string构造函数----------------------

// string();        			//创建一个空的字符串 例如: string str;
// string(const char* s);          //使用字符串s初始化
// string(const string& str);      //使用一个string对象初始化另一个string对象
// string(int n, char c);          //使用n个字符c初始化 

void test01()
{
	string s1; //创建空字符串，调用无参构造函数
	cout << "str1 = " << s1 << endl;

	const char * str = "hello world";
	string s2(str); //把c_string转换成了string
	cout << "str2 = " << s2 << endl;

	string s3(s2); //调用拷贝构造函数
	cout << "str3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "str4 = " << s4 << endl;
}




// ------------string赋值操作----------------------

// 赋值的函数原型：

// string& operator=(const char* s);          //char*类型字符串 赋值给当前的字符串
// string& operator=(const string &s);        //把字符串s赋给当前的字符串
// string& operator=(char c);                 //字符赋值给当前的字符串
// string& assign(const char *s);             //把字符串s赋给当前的字符串
// string& assign(const char *s, int n);      //把字符串s的前n个字符赋给当前的字符串
// string& assign(const string &s);           //把字符串s赋给当前字符串
// string& assign(int n, char c);             //用n个字符c赋给当前字符串

void test02()
{
    string str1;
	str1 = "hello world";
	cout << "str1 = " << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;

	string str3;
	str3 = 'a';
	cout << "str3 = " << str3 << endl;

	string str4;
	str4.assign("hello c++");
	cout << "str4 = " << str4 << endl;

    string str5;
    str5.assign("hello c++",5);
	cout << "str5 = " << str5 << endl;

    string str6;
    str6.assign(str5);
	cout << "str6 = " << str6 << endl;

	string str7;
	str7.assign(5, 'x');
	cout << "str7 = " << str7 << endl;
}




// ------------string字符串拼接----------------------

// 函数原型：

// string& operator+=(const char* str);                 //重载+=操作符
// string& operator+=(const char c);                    //重载+=操作符
// string& operator+=(const string& str);               //重载+=操作符
// string& append(const char *s);                       //把字符串s连接到当前字符串结尾
// string& append(const char *s, int n);                //把字符串s的前n个字符连接到当前字符串结尾
// string& append(const string &s);                     //同operator+=(const string& str)
// string& append(const string &s, int pos, int n);     //字符串s中从pos开始的n个字符连接到字符串结尾



int main()
{
    test02();
    return 0;
}