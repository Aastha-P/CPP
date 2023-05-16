#include <iostream>
using namespace std;
int main()
{
    int n, i, j, f = 0;

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
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
                f = 1;
            break;
        }
    }
    if (f == 0)
    {
        cout << "Arrry is in ascending order.";
    }
    else if (f == 1)
        cout << "Array is in descending order.";

    return 0;
}
