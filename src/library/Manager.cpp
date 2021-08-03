#include "Manager.h"

Manager::Manager(int ID, string Name, int DeptID)
{
    this->m_ID = ID;
    this->m_Name = Name;
    this->m_DeptID = DeptID;
}

Manager::~Manager()
{
}

void Manager::showInfo()
{
    cout << "编号：" << this->m_ID << "\t"
         << "姓名：" << this->m_Name << "\t"
         << "部门：" << this->m_DeptID << this->getDeptName() << "\t"
         << "岗位：" << this->getPosName() << "\t"
         << "职责：" << "完成老板交给的任务,并下发任务给员工" << endl;
}

string Manager::getPosName()
{
    return string("经理");
}