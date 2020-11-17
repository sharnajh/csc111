// Sharna Hossain
// CSC 111
// Lab 19 | minmaxarr.cpp

#include <iostream>
using namespace std;

int FindMin(int[], int);
void output(int[], int, string);

int FindMax(int arr[], int size)
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        index = arr[index] > arr[i] ? index : i;
    }
    return index;
}

int main()
{
    int size, min, max;
    cout << "How many numbers do you want to enter? ";
    cin >> size;

    // Initialize values
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    max = FindMax(arr, size);
    min = FindMin(arr, size);

    // Output values
    output(arr, max, "Max");
    output(arr, min, "Min");

    return 0;
}

int FindMin(int arr[], int size)
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        index = arr[index] < arr[i] ? index : i;
    }
    return index;
}

void output(int arr[], int index, string value)
{
    cout << value << " number is " << arr[index];
    cout << " which is the #" << index + 1;
    cout << " element in the array and is ";
    cout << "located in array[" << index << "].\n";
}