// CSC 111
// Sharna Hossain
// Assignment 13 | rectangles.cpp

#include <iostream>
using namespace std;

double Area(double, double);
double Perimeter(double, double);

double Area(double l, double w)
{
    return w * l;
}

int main()
{
    double l, w, perimeter, area;

    cout << "Enter the width: ";
    cin >> w;
    cout << "Enter the length: ";
    cin >> l;

    perimeter = Perimeter(l, w);
    area = Area(l, w);

    cout << "The perimeter is " << perimeter << "\n";
    cout << "The area is " << area << "\n";
    
    return 0;
}

double Perimeter(double l, double w)
{
    return 2.0 * (l * w);
}