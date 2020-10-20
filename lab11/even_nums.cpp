// Sharna Hossain
// CSC 111
// Lab 11 | even_nums.cpp

// Find all even numbers between 100 and 1000

#include <iostream>
using namespace std;

int main()
{
    const int MIN = 100, MAX = 1000;

    // Solution with For Loop
    for (int num = MIN; num <= MAX; num++)
    {
        if (num % 2 == 0)
        {
            cout << num << endl;
        }
    }

    // Solution with While Loop
    // int num = 100;
    // while (num <= MAX)
    // {
    //     if (num % 2 == 0)
    //     {
    //         cout << num << endl;
    //     }
    //     num++;
    // }

    return 0;
}