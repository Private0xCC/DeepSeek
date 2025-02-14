#include <iostream>
#include <string>
#include <thread>
using namespace std;

int main(){
    cout << "我是 DeepSeek，很高兴见到你！" << endl;
    cout << "我可以帮你写代码、读文件、写作各种创意内容，请把你的任务交给我吧~\n" << endl;

    cout << "给 DeepSeek 发送消息 :" << endl;

    string s;
    cin >> s;

    cout << "\n思考中";
    cout.flush();

    for (int i = 0; i < 10; ++i) {
        this_thread::sleep_for(chrono::seconds(1));
        cout << ".";
        cout.flush();
    }

    cout << "\n服务器繁忙，请稍后再试。" << endl;

    return 0;
}

