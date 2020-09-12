// CSC 111
// Sharna Hossain
// Assignment 2B

#include <iostream>
using namespace std;

int calc_area(int radius)
{
    return (radius * radius) * 3.14;
}

int calc_circumference(int radius)
{
    return 2 * 3.14 * radius;
}

int main()
{
    int radius, area, circumference;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = calc_area(radius);
    circumference = calc_circumference(radius);

    cout << "The area is " << area << endl;
    cout << "The circumference is " << circumference << endl;

    return 0;
}