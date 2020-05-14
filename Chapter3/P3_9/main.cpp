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
    single_tax_rule.push_back({0, 9525, 0, 0.10});
    single_tax_rule.push_back({9526, 38700, 952.5, 0.12});
    single_tax_rule.push_back({38701, 82500, 4453.5, 0.22});
    single_tax_rule.push_back({82501, 157500, 14089.5, 0.24});
    single_tax_rule.push_back({157501, 200000, 32089.5, 0.32});
    single_tax_rule.push_back({200001, 500000, 45689.5, 0.35});
    single_tax_rule.push_back({500001, -1, 150689.5, 0.37});
    return single_tax_rule;
}

// 获取已婚者的收入税率
static vector<tax_rate_rule> get_married_tax_rule()
{
    vector<tax_rate_rule> married_tax_rule;
    married_tax_rule.push_back({0, 19050, 0, 0.10});
    married_tax_rule.push_back({19050, 77400, 1905, 0.12});
    married_tax_rule.push_back({77401, 165000, 8907, 0.22});
    married_tax_rule.push_back({165001, 315000, 28179, 0.24});
    married_tax_rule.push_back({315001, 400000, 64179, 0.32});
    married_tax_rule.push_back({400001, 600000, 91379, 0.35});
    married_tax_rule.push_back({600001, -1, 161379, 0.37});
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