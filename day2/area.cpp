// CSC 111
// Sharna Hossain
// Assignment 1B

// Write a c++ program that calculates the area
// and perimeter of a rectangle.

#include <iostream>
using namespace std;

int calc_area(int width, int length)
{
    return width * length;
}

int calc_perimeter(int width, int length)
{
    return 2 * (width + length);
}

int main()
{
    int width = 4;
    int length = 6;
    int area = calc_area(width, length);
    int perimeter = calc_perimeter(width, length);

    cout << "When a rectangle has a width of " << width << endl;
    cout << "and a length of " << length << endl;
    cout << "The area is " << area << endl;
    cout << "The perimeter is " << perimeter << endl;

    return 0;
}
