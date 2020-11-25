// Sharna Hossain
// CSC 111
// Lab 21 | binary_search.cpp

#include <iostream>
using namespace std;

void output(int, int);

int forLoop(int arr[], int min, int max, int query)
{
    for (int index = min; index < max; index++)
    {
        if (arr[index] == query)
            return index;
    }
}

int binarySearch(int arr[], int size, int query)
{
    if (size > 2)
    {
        int middleIndex = size / 2;
        
        // Check middle value of array
        if (arr[middleIndex] == query)
            return middleIndex;

        // Check left-hand of array
        forLoop(arr, 0, middleIndex, query);

        // Check right-hand of array
        forLoop(arr, (middleIndex + 1), size, query);
    }
    else
    {
        forLoop(arr, 0, size, query);
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
        cout << query << " does not exist in array";
    }
    else
    {
        cout << query << " is the #" << index + 1;
        cout << " element and is located at ";
        cout << "array[" << index << "]\n";
    }
}