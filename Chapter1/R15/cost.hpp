#ifndef _cost_hpp_
#define _cost_hpp_ 1

#include <iostream>

using namespace std;

namespace bigcpp {
    namespace chapter1 {
        class Cost {
            virtual double get_cost() = 0; 
        };

        class TrainCost: public Cost {
        private:
            double ticket_amount;
        public:
            TrainCost(double ticket_amount): ticket_amount(ticket_amount){}
            double get_cost() {return ticket_amount;};
        };

        
        class CarCost: public Cost {
        private:
            double kilomiles = 0.0;
            double oil_price = 0.0;
            double oil_rate = 0.0;
            double repair_price = 0.0;

        public:
            CarCost(double kilomiles, double oil_price, double oil_rate, double repair_price): kilomiles(kilomiles), oil_price(oil_price), oil_rate(oil_rate), repair_price(repair_price){}
            double get_cost() {return (kilomiles/oil_rate) * oil_price + kilomiles * repair_price;}
        };
    }
}

#endif