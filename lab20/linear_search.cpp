// Sharna Hossain
// CSC 111
// Lab 20 | linear_search.cpp

#include <iostream>
using namespace std;

int search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    // Initialize values
    int size, target, index;

    cout << "Enter the size of the array of numbers: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number #" << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Which number are you looking for? ";
    cin >> target;

    index = search(arr, size, target);

    // Output values
    if (index == -1)
    {
        cout << target << " cannot be found in array";
    }
    else
    {
        cout << target << " is the #" << index + 1;
        cout << " element and can be found at ";
        cout << "array[" << index << "]\n";
    }

    return 0;
}