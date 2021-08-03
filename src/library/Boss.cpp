#include "Boss.h"

Boss::Boss(int ID, string Name, int DeptID)
{
    this->m_ID = ID;
    this->m_Name = Name;
    this->m_DeptID = DeptID;
}

Boss::~Boss()
{
}

void Boss::showInfo()
{
    cout << "编号：" << this->m_ID << "\t"
         << "姓名：" << this->m_Name << "\t"
         << "部门：" << this->m_DeptID << this->getDeptName() << "\t"
         << "岗位：" << this->getPosName() << "\t"
         << "职责：" << "管理公司所有事务" << endl;
}

string Boss::getPosName()
{
    return string("总裁");
}