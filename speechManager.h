//
// Created by 44322 on 2020/7/9.
//
#ifndef UNTITLED4_SPEECHMANAGER_H
#define UNTITLED4_SPEECHMANAGER_H
#include <bits/stdc++.h>
#include "speaker.h"
using namespace std;
//设计管理类
class SpeechManager
{
public:
    //构造
    SpeechManager();
    void show_Menu();
    void exitSystem();
    void initSpeech();
    void createSpeaker();
    void startSpeech();//比赛
    void speechDraw();
    //析构
    ~SpeechManager();
    //成员属性
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    map<int,Speaker>m_Speaker;
    int m_Index;
};
#endif //UNTITLED4_SPEECHMANAGER_H
