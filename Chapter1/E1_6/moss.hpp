#ifndef _moss_hpp_
#define _moss_hpp_ 1

#include <string>
#include <map>

using namespace  std;

namespace bigcpp {
    namespace chapter1 {
        class MossTable {
        private:
            map<char, string> moss_table {
                {'A', "._"},
                {'B', "_..."},
                {'C', "_._."},
                {'D', "_.."},
                {'E', "."},
                {'F', ".._."},
                {'G', "__."},
                {'H', "...."},
                {'I', ".."},
                {'J', ".___"},
                {'K', "_._"},
                {'L', "._.."},
                {'M', "__"},
                {'N', "_."},
                {'O', "___"},
                {'P', ".__."},
                {'Q', "__._"},
                {'R', "._."},
                {'S', "..."},
                {'T', "_"},
                {'U', ".._"},
                {'V', "..._"},
                {'W', ".__"},
                {'X', "_.._"},
                {'Y', "_.__"},
                {'Z', "__.."},
                {'1', ".____"},
                {'2', "..___"},
                {'3', "...__"},
                {'4', "...._"},
                {'5', "....."},
                {'6', "_...."},
                {'7', "__..."},
                {'8', "___.."},
                {'9', "____."},
                {'0', "_____"},
                {'?', "..__.."},
                {'/', "_.._."},
                {'(', "_.__._"},
                {')', "_.__._"},
                {'_', "_...._"},
                {'.', "._._._"}
            };
        public:
            inline string getCode(char ch) {return ((this->moss_table.find(ch) != this->moss_table.end()) ? this->moss_table.find(ch)->second  : "");};
            string getString(string str);
        };
    }// namespace
} // namespace

#endif