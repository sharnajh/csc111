// Sharna Hossain
// CSC 111
// Lab 12 | multiplication_table.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numRows,
        numColumns,
        bigNum,
        digits = 0;

    cout << "Enter the number of rows: ";
    cin >> numRows;
    cout << "Enter the number of columns: ";
    cin >> numColumns;

    bigNum = numRows * numColumns;
    while(bigNum != 0){
        bigNum /= 10;
        digits++;
    }
    digits++;

    // Column Header
    cout << setw(digits) << " ";
    for (int col = 1; col <= numColumns; col++)
    {
        cout << setw(digits) << col;
    }
    cout << "\n";

    for (int row = 1; row <= numRows; row++)
    {
        // Row Header
        cout << setw(digits) << row;

        for (int col = 1; col <= numColumns; col++)
        {
            cout << setw(digits) << col * row;
        }
        cout << "\n";
    }

    return 0;
}