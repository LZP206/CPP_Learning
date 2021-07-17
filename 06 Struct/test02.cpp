#include <iostream>
using namespace std;
#include <string>


/*
���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;
�����ṹ�����飬�����д��5��Ӣ�ۡ�
ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ��
*/

//Ӣ�۽ṹ��
struct hero
{
    string name;
    int age;
    string sex;
};
void printHero(struct hero *h_arr, int len)
{
    for (int i = 0; i < len; i++) {
        cout << "������" << h_arr[i].name << "\t���䣺" << h_arr[i].age
             << "\t�Ա�" << h_arr[i].sex << endl;
    }
}

void bubbleSort_age(struct hero *h_arr, int len)
{
    for (int i = 0; i < len-1; i++) {
        for (int j = 0; j < len-1-i; j++) {
            if (h_arr[j].age > h_arr[j+1].age)
            {
                struct hero temp = h_arr[j];
                h_arr[j] = h_arr[j+1];
                h_arr[j+1] = temp;
            }
        }
    }
}



int main(){
    struct hero h_arr[5] =
            {
                    {"����",23,"��"},
                    {"����",22,"��"},
                    {"�ŷ�",20,"��"},
                    {"����",21,"��"},
                    {"����",19,"Ů"},
            };
    int len = sizeof(h_arr)/sizeof(h_arr[0]);
    printHero(h_arr,len);
    cout << endl;

    cout << "�����鰴�����С����ð����������:" << endl;
    bubbleSort_age(h_arr,len);
    printHero(h_arr,len);

    return 0;
}
