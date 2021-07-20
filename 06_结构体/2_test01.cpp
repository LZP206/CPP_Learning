#include <iostream>
using namespace std;
#include <string>
#include <ctime> // ���������: srand((unsigned int)time(NULL));


/*
ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�
*/

struct student
{
    string name;
    int score;
};
struct teacher{
    string name;
    struct student s_arr[5];
};

// ����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct teacher *t_arr,int len)
{
    string nameSeed ="ABCDE";
    for (int i = 0; i < len; i++) {
        t_arr[i].name = "Teacher_";
        t_arr[i].name += nameSeed[i];
        // ͨ��ѭ����ÿ��ѧ��������ѧ����ֵ
        for (int j = 0; j < 5; j++) {
            t_arr[i].s_arr[j].name = "Student_";
            t_arr[i].s_arr[j].name += nameSeed[j];

            int random = rand()%61 +40;
            t_arr[i].s_arr[j].score = random;
        }

    }
}
// ��ӡ������Ϣ�ĺ���
void printInfo(struct teacher *t_arr, int len)
{
    for (int i = 0; i < len; ++i) {
        cout << "��ʦ������" << t_arr[i].name << endl;
        for (int j = 0; j < 5; ++j) {
            cout << "\tѧ��������" << t_arr[i].s_arr[j].name
            << "\t������" << t_arr[i].s_arr[j].score << endl;
        }
    }
}


int main(){
    // ���������
    srand((unsigned int)time(NULL));

    // ����3����ʦ������
     struct teacher t_arr[3];

    // ͨ��������������ʦ����Ϣ��ֵ��������ʦ����ѧ������Ϣ��ֵ
    int len = sizeof(t_arr)/sizeof(t_arr[0]);
    allocateSpace(t_arr,len);

    // ��ӡ������ʦ������ѧ������Ϣ
    printInfo(t_arr,len);


    return 0;
}
