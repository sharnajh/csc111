// Sharna Hossain
// CSC 111
// Lab 22 | exercise_2.cpp

// Ask user to enter the size of the array and then ask him to enter
// values for this array. Then by using pointer calculate the average
// of all these numbers.

// Hint: array name is the address of the first element of an array.
// so by knowing the address of the first element you can access all
// elements.

#include <iostream>
using namespace std;

double get_avg(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    } 
    return sum / (size * 1.0);
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element #" << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Average is " << get_avg(arr, size) << endl;

    return 0;
}