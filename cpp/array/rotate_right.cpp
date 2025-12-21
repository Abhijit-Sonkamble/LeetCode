#include <iostream>
using namespace std;

void rotateArrayRightByOne(int a[], int n)
{
    int temp = a[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
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
        rotateArrayRightByOne(a, n);
    }

    cout << "Array after rotating right by " << k << " steps:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}