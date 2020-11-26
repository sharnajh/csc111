// Sharna Hossain
// CSC 111
// Lab 21 | binary_search.cpp

#include <iostream>
// In order for binary search to work, the array
// needs to already be in ascending order.
// For this exercise, I will use the algorithm's library
// to sort so that I can focus on implementing binary search.
#include <algorithm>
#include <iomanip>
using namespace std;

void output(int, int);

int binary_search(int arr[], int size, int query)
{
    int first = 0,
        last = size - 1,
        middle, result = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (arr[middle] == query)
        {
            found = true;
            result = middle;
        }
        else if (arr[middle] > query)
        {
            last = middle - 1;
        }
        else
            first = middle + 1;
    }

    return result;
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

    // Sorting array in ascending order
    sort(arr, arr + size);
    cout << "Sorted list of numbers: ";
    for(int i = 0; i < size; i++)
    {
        cout << setw(4) << arr[i];
    }

    cout << "\nEnter the number you're searching for:  ";
    cin >> query;

    // Output Values
    output(query, binary_search(arr, size, query));

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