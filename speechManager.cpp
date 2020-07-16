//
// Created by 44322 on 2020/7/9.
//
#include "../tou/speechManager.h"

//构造
SpeechManager::SpeechManager(){
    this->initSpeech();
    this->createSpeaker();
}
void SpeechManager::show_Menu()
{
    cout<<"******************************"<<endl;
    cout<<"*********欢迎参加演讲比赛********"<<endl;
    cout<<"*********1.开始演讲比赛*********"<<endl;
    cout<<"*********2.查看往届记录*********"<<endl;
    cout<<"*********3.清空比赛记录*********"<<endl;
    cout<<"*********0.退出比赛程序*********"<<endl;
    cout<<"******************************"<<endl;
    cout<<endl;
}
//退出
void SpeechManager::exitSystem() {
    cout<<"欢迎下次使用"<<endl;
    system("pause");
    exit(0);
}
//初始化容器
void SpeechManager::initSpeech() {
    this->v1.clear();
    this->v2.clear();
    this->v3.clear();
    this->m_Speaker.clear();
    this->m_Index=1;
}
//创建12名对象
void SpeechManager::createSpeaker() {
    string nameSeed="ABCDEFGHIJKL";
    for(int i=0;i<12;i++)
    {
        string name="选手";
        name+=nameSeed[i];
        Speaker sp;
        sp.m_Name=name;
        for(int j=0;j<2;j++)
        {
            sp.m_Scoer[j]=0;
        }
        this->v1.push_back(i+100001);
        this->m_Speaker.insert(make_pair(i+100001,sp));
    }
}
//开始比赛
void SpeechManager::startSpeech() {
    //第一轮
    //抽签
    this->speechDraw();
    system("pause");
    //比赛
    //显示晋级
    //第二轮
    this->speechDraw();
    //抽签
    //比赛
    //显示最终结果
}
//抽签
void SpeechManager::speechDraw() {
    cout<<"第"<<this->m_Index<<"轮选手正在比赛"<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"演讲顺序如下："<<endl;
    if(this->m_Index==1){
        random_shuffle(v1.begin(),v1.end());
        for(vector<int>::iterator it=v1.begin();it!=v1.end();it++)
            cout<<*it<<" ";
            cout<<endl;
            m_Index++;
    }
    else{
        random_shuffle(v2.begin(),v2.end());
        for(vector<int>::iterator it=v2.begin();it!=v2.end();it++)
            cout<<*it<<" ";
        cout<<endl;
    }
}
//析构
SpeechManager::~SpeechManager()
{

}

