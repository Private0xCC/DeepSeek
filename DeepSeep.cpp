#include <iostream>
#include <string>
#include <thread>
using namespace std;

int main(){
    cout << "���� DeepSeek���ܸ��˼����㣡" << endl;
    cout << "�ҿ��԰���д���롢���ļ���д�����ִ������ݣ����������񽻸��Ұ�~\n" << endl;

    cout << "�� DeepSeek ������Ϣ :" << endl;

    string s;
    cin >> s;

    cout << "\n˼����";
    cout.flush();

    for (int i = 0; i < 10; ++i) {
        this_thread::sleep_for(chrono::seconds(1));
        cout << ".";
        cout.flush();
    }

    cout << "\n��������æ�����Ժ����ԡ�" << endl;

    return 0;
}

