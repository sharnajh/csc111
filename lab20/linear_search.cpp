// Sharna Hossain
// CSC 111
// Lab 20 | linear_search.cpp

#include <iostream>
using namespace std;

void output(int, int);

int linearSearch(int arr[], int size, int query)
{
    for (int index = 0; index < size; index++)
    {
        if (arr[index] == query) return index;
    }
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

    // Output values
    output(query, linearSearch(arr, size, query));

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