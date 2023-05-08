#include <iostream>
using namespace std;
int FindSecondLargestNumber(int arr[], int n)
{
    int firstLargest = -1;
    int secondLargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= firstLargest)
        {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }

        else if (arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }

        else
            secondLargest = -1;
    }
    return secondLargest;
}
int main()
{
    int n;
    cout << "Enter the array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = FindSecondLargestNumber(arr, n);
    cout << "second largest element : " << ans << endl;
}