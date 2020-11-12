// Sharna Hossain
// CSC 111
// Lab 17 | max_min_arrs.cpp

#include <iostream>
using namespace std;

int main()
{
    int size, min, max;

    cout << "How many numbers do you want to enter? ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Please enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    max = arr[0], min = arr[0];
    for (int j = 1; j < size; j++)
    {
        if (max < arr[j])
        {
            max = arr[j];
        }
        if (min > arr[j])
        {
            min = arr[j];
        }
    }

    cout << "Among the numbers you entered the ";
    cout << "Max is " << max << " and the ";
    cout << "Min is " << min << endl;

    return 0;
}