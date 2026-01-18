#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter number of array : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter the Target number : ";
    cin >> target;

    // The Logic
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {

                cout << "Index of target sum no. = " << " [ " << i << " , " << j << " ] " << endl;
                cout << "Number of target sum no. = " << " [ " << arr[i] << " , " << arr[j] << " ] " << endl;
                return 0;
            }
        }
    }
}