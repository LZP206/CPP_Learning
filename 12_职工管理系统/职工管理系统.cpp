#include <iostream>
using namespace std;
#include "workerManager.h"
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"


// ------------------------多态测试------------------------
void test01()
{
    Worker * worker = new Employee(1, "张三", 101);
    worker->showInfo();
    delete worker;

    worker = new Manager(2, "李四", 102);
    worker->showInfo();
    delete worker;

    worker = new Boss(3, "王五", 103);
    worker->showInfo();
    delete worker;

    worker = NULL;
}




int main()
{
    workerManager managerFramework;
    int input_choice = 0;
    while (true)
    {
        managerFramework.Show_Menu();
        cout << "请输入你的选择" << endl;
        cin >> input_choice;

        switch (input_choice)
        {
        case 0: // 退出管理程序
            managerFramework.exitSystem();
            break;
        case 1: // 增加职工信息
            managerFramework.addWorker();
            break;
        case 2: // 显示职工信息
            managerFramework.show_WorkerInfo();
            break;
        case 3: // 删除离职职工
            managerFramework.delete_WorkerInfo();
            break;
        case 4: // 修改职工信息
            managerFramework.modify_WorkerInfo();
            break;
        case 5: // 查找职工信息
            managerFramework.find_WorkerInfo();
            break;
        case 6: // 按照编号排序
            break;
        case 7: // 清空所有文档
            break;
        default:
            break;
        }

    }
    
    // test01();
    return 0;
}