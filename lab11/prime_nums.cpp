// Sharna Hossain
// CSC 111
// Lab 11 | prime_nums.cpp

// Find all prime numbers between 10 and 100

#include <iostream>
using namespace std;

int main()
{
    const int MIN = 10, MAX = 100;

    for (int num = MIN; num <= MAX; num++)
    {
        bool isPrime = true;
        // Check if number is prime by dividing it by every
        // int greater than 2 but less than the number itself
        for (int divisor = 2; divisor < num && isPrime; divisor++)
        {
            if (num % divisor == 0)
            {
                // Terminates loop if not prime
                isPrime = false;
            }
        }

        if (isPrime)
        {
            cout << num << endl;
        }
    }
    return 0;
}