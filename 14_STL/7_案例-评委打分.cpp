#include <iostream>
using namespace std;

#include <vector>
#include <deque>
#include <algorithm>

/*
* 案例描述
* 有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。

* 实现步骤
* 1. 创建五名选手，放到vector中
* 2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
* 3. sort算法对deque容器中分数排序，去除最高和最低分
* 4. deque容器遍历一遍，累加总分
* 5. 获取平均分
*/

class Person
{
    public:
    Person(string name, int score_ave)
    {
        this->m_name = name;
        this->m_score_ave = score_ave;
    }

    private:
    string m_name;
    int m_score_ave;
};


void createPerson(vector<Person> & input_array)
{
    string nameseed = "ABCDE";
    for (int i = 0; i < nameseed.size(); i++)
    {
        string name = "选手";
        name += nameseed[i];

        int score_init = 0;
        Person person_temp(name, score_init);

        input_array.push_back(person_temp);
    }
}






int main()
{
    vector<Person> person_array;
    createPerson(person_array);

    return 0;
}