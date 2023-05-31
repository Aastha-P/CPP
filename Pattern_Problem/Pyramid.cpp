#include <stdio.h>

int main()
{
     int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i <= rows; i++)
    {  
        for (int j = rows; j>=i; j--)
        {
            printf(" ");
        }

        for (int k = 0; k < (2 * i) + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
