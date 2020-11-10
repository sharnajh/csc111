// Sharna Hossain
// CSC 111
// Lab 16 | array.cpp

// Ask the user to tell you the number of grades.
// Define an array with the size of the user's answer.
// Ask the user to enter grades.
// Finally, calculate the average.

#include <iostream>
using namespace std;

double FindAvg(int arr[], int size)
{
    double total;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    return total / size;
}

int main()
{
    int size;

    cout << "Enter number of grades: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Average is " << FindAvg(arr, size) << endl;

    return 0;
}