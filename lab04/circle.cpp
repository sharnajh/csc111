// Sharna Hossain
// CSC111
// Lab 4 | circle.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float radius, circumference, area;
    float pi = 3.14159265359;

    cout << "Please enter the radius: ";
    cin >> radius;

    circumference = 2 * pi * radius;
    area = (radius * radius) * pi;

    cout << setprecision(2) << fixed;
    cout << "The circumference is: " << setw(8) << circumference << endl;
    cout << "The area is: " << setw(8) << area << endl;

    return 0;
}

