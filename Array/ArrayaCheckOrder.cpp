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
        cin >> arr[n];
    }

    for (i = 0; i < n; i++)
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
        cout << "Arrry in ascending order.";
    }
    else
        cout << "Array is not in ascending order.";

    return 0;
}
