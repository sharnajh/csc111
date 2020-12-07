// Sharna Hossain
// CSC 111
// Lab 23 | lab23.cpp

// First, define the rectangle class which
// has two functions for calculating area
// and perimeter. then write a c++ program
// that in its main function has 2 square
// objects and calculate their area and
// perimeter. for each object ask the user
// to give you the sides.

#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
private:
    double width;
    double length;

public:
    void set_width(double);
    void set_length(double);
    double calc_area() const;
    double calc_perimeter() const;
};

int main()
{
    for (int i = 1; i <= 2; i++)
    {
        Rectangle shape;
        double width, length;
        string rectName = "Rectangle #";
        rectName += to_string(i);

        cout << "Enter " << rectName << " length: ";
        cin >> length;
        cout << "Enter " << rectName << " width: ";
        cin >> width;

        shape.set_width(width);
        shape.set_length(length);

        cout << rectName << " area: "
             << shape.calc_area() << "\n";
        cout << rectName << " perimeter: "
             << shape.calc_perimeter() << "\n";
    }

    return 0;
}

void Rectangle::set_width(double w)
{
    width = w;
};

void Rectangle::set_length(double l)
{
    length = l;
};

double Rectangle::calc_area() const
{
    return width * length;
};

double Rectangle::calc_perimeter() const
{
    return 2.0 * (width + length);
};