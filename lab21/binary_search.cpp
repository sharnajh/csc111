// Sharna Hossain
// CSC 111
// Lab 21 | binary_search.cpp

#include <iostream>
using namespace std;

void output(int, int);

int binarySearch(int arr[], int size, int query)
{
    // Check middle value of array
    int middleIndex = size / 2;
    if (arr[middleIndex] == query) return middleIndex;

    // Check left-hand of array
    for (int index = 0; index < middleIndex; index++)
    {
        if(arr[index] == query) return index;
    }

    // Check right-hand of array
    for (int index = middleIndex; index < size; index++)
    {
        if (arr[index] == query) return index;
    }

    // Query does not exist in array
    return -1;
}

int main()
{
    // Initialize values
    int size, query;

    cout << "Enter the size of the array of numbers: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number #" << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the number you're searching for:  ";
    cin >> query;

    // Output Values
    output(query, binarySearch(arr, size, query));

    return 0;
}

void output(int query, int index)
{
    if (index == -1)
    {
        cout << query << " cannot be found in array";
    }
    else
    {
        cout << query << " is the #" << index + 1;
        cout << " element and can be found at ";
        cout << "array[" << index << "]\n";
    }
}