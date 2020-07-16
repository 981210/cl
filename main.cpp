#include<bits/stdc++.h>
#include "../tou/speechManager.h"
using namespace std;

int main() {
    SpeechManager sm;
    /*for(map<int,Speaker>::iterator it=sm.m_Speaker.begin();it!=sm.m_Speaker.end();it++)
    {
        cout<<"bianhao£º"<<it->first<<"xingming:"<<it->second.m_Name<<"fenshu:"<<it->second.m_Scoer[0]<<endl;
    }*/
    int choice = 0;
    while (true) {
        sm.show_Menu();
        cout << "ÇëÊäÈëÄãµÄÑ¡Ôñ£º" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                sm.startSpeech();
                break;
            case 2:
                break;
            case 3:
                break;
            case 0:
                sm.exitSystem();
                break;
            default:
                system("cls");
                break;
        }
    }
    system("pause");
    return 0;
}