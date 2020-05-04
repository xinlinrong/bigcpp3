#include <iostream>
#include <stdexcept>
#include "area.hpp"

using namespace std;
using namespace bigcpp::chapter1;

// house constructor
House::House(double length, double width, double height)
{
    if (length <= 0) {
        throw logic_error("length of house must be greater than 0");
    }

    if (width <= 0) {
        throw logic_error("width of house must be greater than 0");
    }

    if (height <= 0) {
        throw logic_error("height of house must be greater than 0");
    }
    
    this->height = height;
    this->width = width;
    this->length = length;
}

// add door
double House::add_door(double height, double width)
{
    if (height <= 0 || width <= 0) {
        throw logic_error("height or width of door must be greater than 0");
    }

    if (height >= this->height) {
        throw logic_error("height of door must be greater than house height");
    }

    if (width >= this->width) {
        throw logic_error("width of door must be greater than house width");
    }

    Door d{height, width};
    doors.push_back(d);
}

// add window
double House::add_window(double height, double width)
{
    if (height <= 0 || width <= 0) {
        throw logic_error("height or width of window must be greater than 0");
    }

    if (height >= this->height) {
        throw logic_error("height of window must be greater than house height");
    }

    if (width >= this->width) {
        throw logic_error("width of door window be greater than house width");
    }
    
    Window w{height, width};
    windows.push_back(w);
}

// define house outer area
double House::get_area()
{
    double doors_area = 0.0;
    double windows_area = 0.0;

    // calculate doors area
    if (doors.size()) {
        for (auto d: doors) {
            doors_area += d.get_area();
        }
    }

    // calculate windows area
    if (windows.size()) {
        for (auto w: windows) {
            windows_area += w.get_area();
        }
    }

    double full_area = this->get_full_area();
    if (full_area < (windows_area + doors_area)) {
        throw logic_error("house full outer area is lower than windows's area + doors's area");
    }

    return (full_area - windows_area - doors_area);
}