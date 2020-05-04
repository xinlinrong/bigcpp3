#ifndef _house_hpp_
#define _house_hpp_ 1

#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace bigcpp {
    namespace chapter1 {
        class Rectangle {
            virtual double get_area() = 0;
        };

        class Door: public Rectangle {
        private:
            double height = 0.0;
            double width = 0.0;
        public:
            Door(double height, double width): height(height), width(width) {}
            double get_area(){return height * width;};
        };

        class Window: public Rectangle {
        private:
            double height = 0.0;
            double width = 0.0;
        public:
            Window(double height, double width): height(height), width(width) {}
            double get_area(){return height * width;};
        };
        
        class House {
        private:
            double length = 0.0;
            double width = 0.0;
            double height = 0.0;
            double get_full_area() {return 2 * height * (length + width);}
            double log(const string &message) {cout << message << endl;}
            vector<Door> doors{};
            vector<Window> windows{};
            
        public:
            House(double length, double width, double height);
            double add_door(double height, double width);
            double add_window(double height, double width);
            double get_area();
        };
    }
} // namespace

#endif