//
// Created by 44322 on 2020/7/9.
//
#include "../tou/speechManager.h"

//����
SpeechManager::SpeechManager(){
    this->initSpeech();
    this->createSpeaker();
}
void SpeechManager::show_Menu()
{
    cout<<"******************************"<<endl;
    cout<<"*********��ӭ�μ��ݽ�����********"<<endl;
    cout<<"*********1.��ʼ�ݽ�����*********"<<endl;
    cout<<"*********2.�鿴�����¼*********"<<endl;
    cout<<"*********3.��ձ�����¼*********"<<endl;
    cout<<"*********0.�˳���������*********"<<endl;
    cout<<"******************************"<<endl;
    cout<<endl;
}
//�˳�
void SpeechManager::exitSystem() {
    cout<<"��ӭ�´�ʹ��"<<endl;
    system("pause");
    exit(0);
}
//��ʼ������
void SpeechManager::initSpeech() {
    this->v1.clear();
    this->v2.clear();
    this->v3.clear();
    this->m_Speaker.clear();
    this->m_Index=1;
}
//����12������
void SpeechManager::createSpeaker() {
    string nameSeed="ABCDEFGHIJKL";
    for(int i=0;i<12;i++)
    {
        string name="ѡ��";
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
//��ʼ����
void SpeechManager::startSpeech() {
    //��һ��
    //��ǩ
    this->speechDraw();
    system("pause");
    //����
    //��ʾ����
    //�ڶ���
    this->speechDraw();
    //��ǩ
    //����
    //��ʾ���ս��
}
//��ǩ
void SpeechManager::speechDraw() {
    cout<<"��"<<this->m_Index<<"��ѡ�����ڱ���"<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"�ݽ�˳�����£�"<<endl;
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
//����
SpeechManager::~SpeechManager()
{

}

