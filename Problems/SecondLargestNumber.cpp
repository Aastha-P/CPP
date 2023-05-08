#include <iostream>
using namespace std;
int SecondLargest(int arr[], int n)
{
    int max1 = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)

            max1 = arr[i];
    }
    cout << "Largest Number= " << max1 << endl;

    int max2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max2 and arr[i] < max1)

            max2 = arr[i];
    }
    cout << "Second Largest Number= " << max2 << endl;

    return max2;
}

int main()
{
    int n;
    cout << "Enter the array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = SecondLargest(arr, n);
    // cout << "second largest element : " << ans << endl;
}