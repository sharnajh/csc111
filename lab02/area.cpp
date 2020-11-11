// CSC 111
// Sharna Hossain
// Assignment 2A

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
    int width, length, area, perimeter;

    cout << "Enter the width: ";
    cin >> width;

    cout << "Enter the length: ";
    cin >> length;

    area = calc_area(width, length);
    perimeter = calc_perimeter(width, length);

    cout << "The area is " << area << endl;
    cout << "The perimeter is " << perimeter << endl;

    return 0;
}
