#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The Array: ";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}
