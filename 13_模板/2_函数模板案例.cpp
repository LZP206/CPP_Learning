#include <iostream>
using namespace std;

// 案例描述：
// * 利用函数模板封装一个排序的函数，可以对**不同数据类型数组**进行排序
// * 排序规则从大到小，排序算法为**选择排序**
// * 分别利用**char数组**和**int数组**进行测试

template<typename T>
void myselectSort(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int temp_Max = i;
        for (int j = i+1; j < len; j++)
        {
            if (arr[temp_Max] < arr[j])
            {
                temp_Max = j;
            }
        }
        if (temp_Max != i)
        {
            T temp = arr[i];
            arr[i] = arr[temp_Max];
            arr[temp_Max] = temp;
        }
    }
}


template<typename T>
void printArray(T arr[], int len) {

	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


void test01()
{
	//测试char数组
	char charArr[] = "bdcfeagh";
	int num = sizeof(charArr) / sizeof(char);
	myselectSort(charArr, num);
	printArray(charArr, num);
}
void test02()
{
	//测试int数组
	int intArr[] = { 7, 5, 8, 1, 3, 9, 2, 4, 6 };
	int num = sizeof(intArr) / sizeof(int);
	myselectSort(intArr, num);
	printArray(intArr, num);
}

int main()
{

    test01();
	test02();
    return 0;
}