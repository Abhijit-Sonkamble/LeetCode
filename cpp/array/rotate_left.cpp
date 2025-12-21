#include <iostream>
using namespace std;

void rotateArrayLeftByOne(int a[], int n)
{
    int temp = a[0];
    for (int i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    a[n - 1] = temp;
}

int main()
{
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter number of rotations (k): ";
    cin >> k;

    k = k % n;

    for (int i = 0; i < k; i++)
    {
        rotateArrayLeftByOne(a, n);
    }

    cout << "Array after rotating left by " << k << " steps:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}