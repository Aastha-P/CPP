#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "Array in descending order: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}