#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the size of row of Matrix: ";
    cin >> n;
    cout << "Enter the size ofcolumn of Matrix: ";
    cin >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}
