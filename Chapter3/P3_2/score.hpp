#include <iostream>
#include <string>

#ifndef _score_hpp_
#define _score_hpp_ 1

using namespace std;
namespace bigcpp {
    namespace chapter3 {
        class score_level
        {
            public:
                const static int level_a = 4;
                const static  int level_b = 3;
                const static  int level_c = 2;
                const static  int level_d = 1;
                const static  int level_f = 0;
        };

        // 分数转换
        class score
        {
            private:
                double origin_score{0.00};
                int main_score = 0;
                int partial_score = 0;
                string score_level{};
                inline int get_main_score() {return ((int)(origin_score * 100))/100;}
                inline int get_partial_score() {return ((int)(origin_score * 100))%100;}
            public:
                score(double score):origin_score(score){};
                string get_level();
        };
    }//namespace
}//namespace

#endif