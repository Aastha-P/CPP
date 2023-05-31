#include <stdio.h>

int main()
{
     int r, i, j, k;
    cout << "Enter rows: ";
    cin >> r;

    for (i = r; i >= 1; i--)
    {
        for (j = r - i; j > 0; j--)
        {
            cout << " ";
        }

        for (k = i; k > 0; k--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
