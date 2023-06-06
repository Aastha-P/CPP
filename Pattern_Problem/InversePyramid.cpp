#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // first loop to print all rows
    for (int i = 0; i <= rows; i++)
    {

        // inner loop 1 to print white spaces
        for (int j = 0; j <= i + 1; j++)
        {
            cout << " ";
        }

        // inner loop 2 to print star * character
        for (int k = 0; k < rows - i; k++)
        {
            cout<<" *";
        }
        cout << endl;
    }
    return 0;
}
