// Sharna Hossain
// CSC 111
// Lab 9 | divBy5_nums.cpp

#include <iostream>
using namespace std;

int main()
{
    int num = 10;

    while (num <= 1000)
    {
        // Solution 1
        // cout << num << endl;
        // num += 5;

        // Solution 2
        if (num % 5 == 0)
        {
            cout << num << endl;
        }
        num++;
    }

    return 0;
}

