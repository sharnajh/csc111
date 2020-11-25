// Sharna Hossain
// CSC 111
// Lab 21 | selection_sort.cpp

#include <iostream>
#include <iomanip>
using namespace std;

void output(int[], int);

void selection_sort(int arr[], int size)
{
    int min;
    for (int i = 0; i < size; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (min != i) {
            int temp = arr[min];
            
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

    // Output values
    output(arr, size);
}

int main()
{
    // Initialize values
    int size;
    cout << "Enter the size of your list: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element #" << i + 1 << ": ";
        cin >> arr[i];
    }

    // Sort and output
    selection_sort(arr, size);

    return 0;
}

void output(int arr[], int size)
{
    cout << "Here is your selection-sorted list of numbers:\n";
    for (int i = 0; i < size; i++)
    {
        cout << setw(4) << arr[i];
    }
}