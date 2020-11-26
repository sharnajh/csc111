// Sharna Hossain
// CSC 111
// Lab 21 | bubble_sort.cpp

#include <iostream>
#include <iomanip>
using namespace std;

void output(int[], int);

void bubble_sort(int arr[], int size)
{
    bool swapped;
    do
    {
        swapped = false;
        for (int i = 0; i < size - 1; i++)
        {

            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    // temp vars
                    int temp = arr[j];

                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;

                    swapped = true;
                }
            }
        }
    } while (swapped);

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
    bubble_sort(arr, size);

    return 0;
}

void output(int arr[], int size)
{
    cout << "Here is your 🧼bubble-sorted list of numbers:\n";
    for (int i = 0; i < size; i++)
    {
        cout << setw(4) << arr[i];
    }
}