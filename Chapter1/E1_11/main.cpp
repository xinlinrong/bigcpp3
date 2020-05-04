#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    cout.width(32);
    cout.fill(' ');
    cout << std::internal << "List of Phrases to Translate";
    cout.width(32);
    cout.fill(' ');
    cout << std::internal << "Chinese";
    cout << endl;

    cout.width(32);
    cout.fill(' ');
    cout << std::left << "Good morning";
    cout.width(32);
    cout.fill(' ');
    cout << std::left << "zao shang hao";
    cout << endl;

    cout.width(32);
    cout.fill(' ');
    cout << std::left << "It's a pleasure to meet you";
    cout.width(32);
    cout.fill(' ');
    cout << std::left << "jian dao ni zhen gao xing";
    cout << endl;

    cout.width(32);
    cout.fill(' ');
    cout << std::left << "Please call me tomorrow";
    cout.width(32);
    cout.fill(' ');
    cout << std::left << "ming tian qing da gei wo";
    cout << endl;

    cout.width(32);
    cout.fill(' ');
    cout << std::left << "Have a nice day";
    cout.width(32);
    cout.fill(' ');
    cout << std::left << "zhu nin yu kuai";
    cout << endl;
    return 0;
}
