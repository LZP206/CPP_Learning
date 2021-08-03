#include "Employee.h"

Employee::Employee(int ID, string Name, int DeptID)
{
    this->m_ID = ID;
    this->m_Name = Name;
    this->m_DeptID = DeptID;
}

Employee::~Employee()
{
}

void Employee::showInfo()
{
    cout << "编号：" << this->m_ID << "\t"
         << "姓名：" << this->m_Name << "\t"
         << "部门：" << this->m_DeptID << this->getDeptName() << "\t"
         << "岗位：" << this->getPosName() << "\t"
         << "职责：" << "完成经理交给的任务" << endl;
}

string Employee::getPosName()
{
    return string("职员");
}