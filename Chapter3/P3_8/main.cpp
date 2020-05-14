#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 税率
struct tax_rate_rule
{
    double min_amount;
    double max_amount;
    double last_level_amount;
    double tax_rate;
    tax_rate_rule(double min, double max, double last_level, double tax_rate): min_amount(min), max_amount(max), last_level_amount(last_level), tax_rate(tax_rate){};
};

// 获取单身者的收入税率
static vector<tax_rate_rule> get_single_tax_rule()
{
    vector<tax_rate_rule> single_tax_rule;
    single_tax_rule.push_back({0, 8000, 0, 0.10});
    single_tax_rule.push_back({8000, 32000, 800, 0.15});
    single_tax_rule.push_back({32000, -1, 4400, 0.25});
    return single_tax_rule;
}

// 获取已婚者的收入税率
static vector<tax_rate_rule> get_married_tax_rule()
{
    vector<tax_rate_rule> married_tax_rule;
    married_tax_rule.push_back({0, 16000, 0, 0.10});
    married_tax_rule.push_back({16000, 64000, 1600, 0.15});
    married_tax_rule.push_back({64000, -1, 8800, 0.25});
    return married_tax_rule;
}

// 根据税收规律计算税金
static double get_tax_amount(vector<tax_rate_rule> &tax_rule, double income)
{
    double tax_amount{0.0};
    if (income > 0) {
        auto iter = tax_rule.begin();
        for (iter = tax_rule.begin(); iter != tax_rule.end(); ++ iter) {
            if ((iter->max_amount == -1 && iter->min_amount < income) ||
                (iter->min_amount < income && income <= iter->max_amount)) {
                tax_amount = iter->last_level_amount + iter->tax_rate * (income - iter->min_amount);
            } else {
                continue;
            }
        }
    }
    return tax_amount;
}

int main(int argc, char **argv)
{
    string married_status{"single"};
    cout << "please input your married status(single|marired): ";
    cin >> married_status;
    if (married_status != "single" && married_status != "married") {
        cout << "married status must be single or married" << endl;
        return -1;
    }

    cout << "please input your income: ";
    double income{0.00}, tax_amount{0.00};
    cin >> income;
    if (cin.fail() || income < 0) {
        cout << "input variable is not a valid value." << endl;
        return -1;
    }

    vector<tax_rate_rule> tax_rule = (married_status == "single") ? get_single_tax_rule() : get_married_tax_rule();
    tax_amount = get_tax_amount(tax_rule, income);
    cout << "your tax amount is " << tax_amount << endl;
    return 0;
}