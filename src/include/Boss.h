#pragma once
#include <iostream>
using namespace std;

#include "Worker.h"


class Boss : public Worker
{
public:
    Boss(int ID, string Name, int DeptID);
    ~Boss();
    void showInfo();       
    string getPosName();  
};

