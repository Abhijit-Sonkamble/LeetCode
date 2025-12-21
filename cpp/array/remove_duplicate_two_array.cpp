#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int *a = new int[size];
    int *b = new int[size];

    // Input
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element: ";
        cin >> a[i];
    }

    // Sorting
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Remove duplicates
    int second_array = 0;
    b[second_array++] = a[0];

    for (int i = 1; i < size; i++)
    {
        if (a[i] != a[i - 1])
        {
            b[second_array++] = a[i];
        }
    }

    cout << "Remove : ";
    for (int i = 0; i < second_array; i++)
        cout << b[i] << "\t";

    delete[] a;
    delete[] b;
    return 0;
}
