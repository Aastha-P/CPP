#include <iostream>
using namespace std;
int main()
{
    int n, count = 0, j;
    cout << "Enter a Number:";
    cin >> n;
    j = 1;
    while (j <= n)
    {
        if (n % j == 0)
            count++;
        j++;
    }
    if (count == 2)
        cout << n << " is prime number ";
    else
        cout << n << " is composite number";
    return 0;
}