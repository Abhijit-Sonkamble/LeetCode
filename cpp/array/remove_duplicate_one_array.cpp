#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int *a = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element: ";
        cin >> a[i];
    }

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

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < size - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                size--;
                j--;
            }
        }
    }

    cout << "Remove : ";
    for (int i = 0; i < size; i++)
        cout << a[i] << "\t";

    delete[] a;
    return 0;
}
