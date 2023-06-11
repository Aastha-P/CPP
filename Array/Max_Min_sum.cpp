#include <iostream>
using namespace std;
int main()
{
    int n, i, j, max_sum = 0, min_sum = 0;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sorted Array: ";
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    for (i = 0; i < n; i++)
    {
        max_sum += arr[i];
        min_sum = max_sum;
    }
    max_sum -= arr[0];
    min_sum -= arr[n - 1];

    cout << "Max Sum= " << max_sum << endl;
    cout << "Min Sum= " << min_sum << endl;

    return 0;
}
