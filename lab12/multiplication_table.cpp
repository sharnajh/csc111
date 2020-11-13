// Sharna Hossain
// CSC 111
// Lab 12 | multiplication_table.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int rows,
        columns,
        digits = 1;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    int bigNum = rows * columns;
    while(bigNum != 0){
        bigNum /= 10;
        digits++;
    }

    // Column Header
    cout << setw(digits) << " ";
    for (int c = 1; c <= columns; c++)
    {
        cout << setw(digits) << c;
    }
    cout << "\n";

    for (int r = 1; r <= rows; r++)
    {
        // Row Header
        cout << setw(digits) << r;

        for (int c = 1; c <= columns; c++)
        {
            cout << setw(digits) << c * r;
        }
        cout << "\n";
    }

    return 0;
}