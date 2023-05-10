#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of Matrix: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i > j)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
}