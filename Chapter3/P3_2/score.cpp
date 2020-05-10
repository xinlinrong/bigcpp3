#include <iostream>
#include <string>
#include "score.hpp"

using namespace bigcpp::chapter3;
string score::get_level()
{
    this->main_score = this->get_main_score();
    this->partial_score = this->get_partial_score();

    switch (this->main_score) {
        case score_level::level_f:
            this->score_level = "F";
            break;
        case score_level::level_d:
            this->score_level = "D";
            break;
        case score_level::level_c:
            this->score_level = "C";
            break;
        case score_level::level_b:
            this->score_level = "B";
            break;
        case score_level::level_a:
            this->score_level = "A";
            break;
    }

    if (this->partial_score > 0 && this->partial_score <= 40) {
        switch (this->main_score) {
            case score_level::level_f:
                this->score_level = "F";
                break;
            case score_level::level_d:
                this->score_level = "D+";
                break;
            case score_level::level_c:
                this->score_level = "C+";
                break;
            case score_level::level_b:
                this->score_level = "B+";
                break;
        }
    } else if (this->partial_score > 40 && this->partial_score <= 80) {
        switch (this->main_score) {
            case score_level::level_f:
                this->score_level = "F";
                break;
            case score_level::level_d:
                this->score_level = "C-";
                break;
            case score_level::level_c:
                this->score_level = "B-";
                break;
            case score_level::level_b:
                this->score_level = "A-";
                break;
        }
    } else if (this->partial_score > 80 && this->partial_score <= 100) {
        switch (this->main_score) {
            case score_level::level_f:
                this->score_level = "D";
                break;
            case score_level::level_d:
                this->score_level = "C";
                break;
            case score_level::level_c:
                this->score_level = "B";
                break;
            case score_level::level_b:
                this->score_level = "A";
                break;
        }
    }

    return this->score_level;
}