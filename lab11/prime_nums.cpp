// Sharna Hossain
// CSC 111
// Lab 11 | prime_nums.cpp

// Find all prime numbers between 10 and 100

#include <iostream>
using namespace std;

int main()
{
    const int MAX = 100;

    // Loop from 10 - 100
    for (int num = 10; num <= MAX; num++)
    {
        bool isPrime;
        // Check if number is prime by dividing it by every
        // int greater than 2 but less than the number itself
        // AKA the n-1 theorem
        for (int divisor = 2; divisor < num; divisor++)
        {
            if (num % divisor == 0)
            {
                // Terminates loop if not prime
                isPrime = false;
                break;
            }
            isPrime = true;
        }

        if (isPrime)
        {
            cout << num << endl;
        }
    }
    return 0;
}