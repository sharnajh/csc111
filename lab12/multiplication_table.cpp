// Sharna Hossain
// CSC 111
// Lab 12 | multiplication_table.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numRows,
        numColumns;

    cout << "Enter the number of rows: ";
    cin >> numRows;
    cout << "Enter the number of columns: ";
    cin >> numColumns;

    // Column Header
    cout << setw(4) << " ";
    for (int col = 1; col <= numColumns; col++)
    {
        cout << setw(4) << col;
    }
    cout << "\n";

    for (int row = 1; row <= numRows; row++)
    {
        // Row Header
        cout << setw(4) << row;
        
        for (int col = 1; col <= numColumns; col++)
        {
            cout << setw(4) << col * row;
        }
        cout << "\n";
    }

    return 0;
}