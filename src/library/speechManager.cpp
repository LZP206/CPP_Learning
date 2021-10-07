#include "speechManager.h"

speechManager::speechManager()
{
    this->init_Speech();    // 第一步：初始化属性
    this->create_Speaker(); // 第二步：创建12名选手
}

speechManager::~speechManager()
{
}


// ------------------------------ 初始化属性 ------------------------------
void speechManager::init_Speech()
{
    // 容器保证为空
    this->v_round01.clear();
    this->v_round02.clear();
    this->v_final.clear();
    this->m_Speaker.clear();
    // 初始化比赛轮数
    this->m_Index = 1;
}


// ------------------------------ 创建12名选手 ------------------------------
void speechManager::create_Speaker()
{
    string nameseed = "ABCDEFGHIJKL";
    for (int i = 0; i < nameseed.size(); i++)
    {
        string name_temp = "选手";
        name_temp += nameseed[i];
        Speaker speaker_temp;
        speaker_temp.m_Name = name_temp;
        for (int Index = 0; Index < 2; Index++){speaker_temp.m_Score[Index] = 0;}

        this->v_round01.push_back(10001 + i);
        this->m_Speaker.insert(make_pair( 10001 + i , speaker_temp));
    }
}



// ------------------------------ 开始比赛 ------------------------------
void speechManager::start_Speech()
{
    srand((unsigned int)time(NULL));
    // 第一轮比赛
    this->start_Speech_Draw();   // 1.抽签
    this->start_Speech_Contest();// 2.打分排名
    // 3.显示晋级结果

    // 第二轮比赛

    // 1.抽签

    // 2.比赛

    // 3.显示最终结果

    // 4.保存分数
}



// ------------------------------ 抽签 ------------------------------
void speechManager::start_Speech_Draw()
{
    cout << "开始第" << this->m_Index << "轮比赛抽签" << endl;
    cout << "-----------------------" << endl;
    cout << "第" << this->m_Index << "轮比赛抽签结果如下：" << endl;
    if (this->m_Index == 1)
    {
        random_shuffle(this->v_round01.begin(),this->v_round01.end());
        for (vector<int>::iterator it = this->v_round01.begin(); it != this->v_round01.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }
    else
    {
        random_shuffle(this->v_round02.begin(),this->v_round02.end());
        for (vector<int>::iterator it = this->v_round02.begin(); it != this->v_round02.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }
    cout << "-----------------------" << endl;
    cout << endl;
}




// ------------------------------ 打分排名 ------------------------------
void speechManager::start_Speech_Contest()
{
    cout << "------ 第" << this->m_Index << "轮比赛正式开始 ------" << endl;
    vector<int> v_temp;
    if (this->m_Index == 1){v_temp = v_round01;}
    else{v_temp = v_round02;}
    
    int num = 0; // 记录人数
    multimap<double,int,greater<double> > ranker_temp;  // 按照打分降序排列
    for (vector<int>::iterator it = v_temp.begin(); it !=v_temp.end(); it++)
    {
        num++;
        deque<double> d_Score;
        for (int i = 0; i < 10; i++)   // 1.遍历10个评委对每一个选手打分
        {
            double score_temp = ( rand()%501 + 500 ) / 10.0;  // 500 ~ 1000
            d_Score.push_back(score_temp);
        }
        sort(d_Score.begin(),d_Score.end(),greater<double>());
        d_Score.pop_front(); d_Score.pop_back();   // 2.去掉一个最高分一个最低分
        double sum = accumulate(d_Score.begin(),d_Score.end(),0.0);
        double avg = sum / d_Score.size();         // 3.取平均值作为最终打分
        ranker_temp.insert(make_pair(avg, *it));   // 4.存入临时容器
        this->m_Speaker[*it].m_Score[this->m_Index -1] = avg;

        if (num % 6 == 0)
        {
            cout << "第" << num / 6 << "小组比赛名次：" << endl;
            cout << "-----------------------" << endl;
            for (multimap<double,int,greater<double> >::iterator it2 = ranker_temp.begin(); it2 != ranker_temp.end(); it2++)
            {
                cout << " 编号： " << it2->second << " 姓名： " << this->m_Speaker[it2->second].m_Name 
                     << " 成绩： " << this->m_Speaker[it2->second].m_Score[this->m_Index - 1] << endl;
            }
            cout << "-----------------------" << endl;
            int count = 0;
            for (multimap<double,int,greater<double> >::iterator it2 = ranker_temp.begin(); it2 != ranker_temp.end() && count < 3; it2++, count++)
            {
                if (this->m_Index == 1) {v_round02.push_back((*it2).second);}
                else {v_final.push_back((*it2).second);}
            }
            ranker_temp.clear();
            
            cout << endl;
        }
    }
    cout << "------ 第" << this->m_Index << "轮比赛结束 ------" << endl;
}












// ------------------------------ 显示功能选项 ------------------------------
void speechManager::show_Menu()
{
    cout << "********************************************" << endl;
    cout << "*************  欢迎参加演讲比赛 ************" << endl;
    cout << "*************  1.开始演讲比赛  *************" << endl;
    cout << "*************  2.查看往届记录  *************" << endl;
    cout << "*************  3.清空比赛记录  *************" << endl;
    cout << "*************  0.退出比赛程序  *************" << endl;
    cout << "********************************************" << endl;
    cout << endl;
}

// ------------------------------ 功能 0.退出比赛程序 ------------------------------
void speechManager::exit_Manager()
{
    cout << "欢迎下次使用 ~ ~" << endl;
    exit(0);
}

