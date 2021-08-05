#pragma once
#include <iostream>
#include <fstream>
using namespace std;
#include "Worker.h"
#include "Boss.h"
#include "Manager.h"
#include "Employee.h"
#define Filename "wokerInfo"


class workerManager
{
public:
    workerManager();
    ~workerManager();

    void Show_Menu();
    void exitSystem();
    void addWorker();
    void saveInfo();
    int getInfo_workerNum();
    void initial_workerArray();
    int DeptNametoID(string temp_DeptName);
    void show_WorkerInfo();
    int isexist_ID(int input_ID);
    void delete_WorkerInfo();
    void modify_WorkerInfo();
    void find_WorkerInfo();
    

    int m_workerNum;
    Worker ** m_workerArray;
    bool m_FileisEmpty;
};


