// CSC 111
// Sharna Hossain
// Assignment 2B

#include <iostream>
using namespace std;

double calc_area(double radius)
{
    return (radius * radius) * 3.14;
}

double calc_circumference(double radius)
{
    return 2 * 3.14 * radius;
}

int main()
{
    double radius, area, circumference;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = calc_area(radius);
    circumference = calc_circumference(radius);

    
    cout << "The area is " << area << endl;
    cout << "The circumference is " << circumference << endl;

    return 0;
}