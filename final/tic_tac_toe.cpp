// Sharna Hossain
// CSC 111
// Final Project | tic_tac_toe.cpp

#include <iostream>
#include <iomanip>
using namespace std;

void row_line(bool, int);

int main()
{
    // Initialize values
    int table[3][3];
    int val = 0;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            val++;
            table[r][c] = val;
        }
    }

    // Print values
    for (int r = 0; r < 3; r++)
    {
        row_line(true, r);
        for (int c = 0; c < 3; c++)
        {
            cout << setw(4) << table[r][c] << setw(4);
            if (c != 2)
                cout << "|";
        }
        cout << "\n";
        row_line(false, r);
    }

    return 0;
}

void row_line(bool begin, int r)
{
    for (int c = 0; c < 3; c++)
    {
        if (begin)
        {
            cout << setw(4) << " " << setw(4);
            if (c != 2)
                cout << "|";
        }
        else
        {
            if (r != 2)
            {
                cout << "_______";
                if (c != 2)
                    cout << "|";
            }
        }
    }
    cout << "\n";
}