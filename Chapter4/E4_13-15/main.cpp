#include <iostream>
#include <string>

using namespace std;

// 练习 13
int prog_e4_13()
{
    cout << "Please enter word:";
    string word{};
    cin >> word;
    if (!word.size()) {
        cout << "Parameter word can not be null" << endl;
        return -1;
    }

    int max_cnt = 0;
    string print_str{};
    // 每个字节都需要遍历查找并进行计数
    for (int i = 0; i < word.size(); ++ i) {
        int cur_chr_cnt = 0; // 当前字符所占数量
        char find_chr = word.at(i); // 要查找的字符
        if (print_str.find(word.at(i), 0) == string::npos) { // 所查找字符不在打印的字符串上, 查!
            for (int j = 0; j < word.size(); ++ j) {
                if (find_chr == word.at(j)) {
                    ++ cur_chr_cnt;
                }
            }

            if (cur_chr_cnt > max_cnt) {
                print_str.clear();
                print_str += find_chr;
                max_cnt = cur_chr_cnt;
            } else if (cur_chr_cnt == max_cnt) {
                print_str += find_chr;
            }
        }
    }

    cout << "Output result is: '" << print_str << "'"<< endl;
    return 0;
}

bool is_vowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y');
}

// 练习 14
int prog_e4_14()
{
    cout << "Please enter word:";
    string word{};
    cin >> word;
    if (!word.size()) {
        cout << "Parameter word can not be null" << endl;
        return -1;
    }

    string print_str{}, vowel_str{};
    int max_vowels{0};

    for (int i = 0; i <= word.size(); ++i ){
        if (i != word.size() && is_vowel(word.at(i))) {
            vowel_str += word.at(i);
        } else {
            if (vowel_str.size()) {
                if (!print_str.size()) {// 当 print_str 为空串且第一次获取到 元音字符串时
                    max_vowels = vowel_str.size();
                    print_str = vowel_str;
                } else {// 当 print_str 不为空串, 需要对串的长度进行比较
                    if (vowel_str.size() > max_vowels) {
                        print_str.clear();
                        print_str = vowel_str;
                    } else if (vowel_str.size() == max_vowels) {
                        print_str += " ";
                        print_str += vowel_str;
                    }
                }
                vowel_str.clear();
            } else {
                vowel_str.clear();
            }
        }
    }

    cout << "Output result is: '" << print_str << "'"<< endl;
    return 0;
}

// 打印头部, 尾部
string get_top_bottom_print_string(int max_word_size)
{
    string line{};
    for (int i = 0; i < max_word_size; ++i) {
        if (i == 0 || i == max_word_size - 1) {
            line += '+';
        } else {
            line += '-';
        }
    }
    return line;
}

// 打印中间的字符串
string get_print_string(string word_str, int max_word_size)
{
    string line{};
    line +=  '|';
    int space = max_word_size - 2 - word_str.size();
    int left_space = space / 2;
    int right_space = space - left_space;
    for (int i = 0; i < left_space; ++ i) {
        line += '-';
    }
    line += word_str;
    for (int i = 0; i < right_space; ++ i) {
        line += '-';
    }
    line +=  '|';
    return line;
}

// 练习 15
int prog_e4_15()
{
    string words_str;
    cout << "Please enter word:";
    getline(cin, words_str);
    if (!words_str.size()) {
        cout << "Parameter word can not be null" << endl;
        return -1;
    }

    // 以空格为单词的分隔点, 获取最大的单词的长度
    string curr_word{};
    int max_word_size{0};
    for (int i = 0; i <= words_str.size(); ++i) {
        if (i != words_str.size() && words_str.at(i) != ' ') {
            curr_word += words_str.at(i);
        } else {
            cout << curr_word << endl;
            if (max_word_size == 0) {
                max_word_size = curr_word.size();
            } else {
                if (curr_word.size() > max_word_size) {
                    max_word_size = curr_word.size();
                }
            }
            curr_word.clear();
        }
    }

    // 打印出单词最长的长度
    cout << "Maxium word size is " << max_word_size << endl;
    max_word_size += 2;
    string top_bottom_str = get_top_bottom_print_string(max_word_size);
    cout << top_bottom_str << endl;
    for (int i = 0; i <= words_str.size(); ++i) {
        if (i != words_str.size() && words_str.at(i) != ' ') {
            curr_word += words_str.at(i);
        } else {
            cout << get_print_string(curr_word, max_word_size) << endl;
            curr_word.clear();
        }
    }
    cout << top_bottom_str << endl;
    return 0;
}

int main(int argc, char **argv)
{
    cout << "Please enter program num your want to run(13, 14, 15):";
    string prog_name{};
    getline(cin, prog_name);

    if (prog_name == "13") {
        prog_e4_13();
    } else if (prog_name == "14") {
        prog_e4_14();
    } else if (prog_name == "15") {
        prog_e4_15();
    } else {
        cout << "Not implement." << endl;
    }
    return 0;
}