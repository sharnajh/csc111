// Sharna Hossain
// CSC 111
// Lab 18 | 2d_table.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int rows, columns, digits = 4;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    // Initialize values
    int arr[rows + 1][columns + 1];
    for (int r = 0; r <= rows; r++)
    {
        for (int c = 0; c <= columns; c++)
        {
            arr[r][c] = r * c;
        }
    }

    // for (int r = 0; r <= rows; r++)
    // {
    //     for (int c = 0; c <= columns; c++)
    //     {
    //         cout << setw(digits) << arr[r][c];
    //     }
    //     cout << "\n";
    // }

    // Output values
    // Column Header
    cout << setw(digits) << " ";
    for (int c = 1; c <= columns; c++)
    {
        cout << setw(digits) << c;
    }
    cout << endl;

    for (int r = 1; r <= rows; r++)
    {
        // Row Header
        cout << setw(digits) << r;
        for (int c = 1; c <= columns; c++)
        {
            cout << setw(digits) << arr[r][c];
        }
        cout << endl;
    }

    return 0;
}