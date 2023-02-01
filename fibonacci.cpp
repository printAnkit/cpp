#include <iostream>
using namespace std;
int main()
{
    int n, i, a = 0, b = 1;
    cin >> n;
    if (n == 0)
    {
        cout << "0";
    }
    else if (n == 1)
    {
        cout << "0,1";
    }
    else
    {
        int sum;
        cout << "0,";
        for (i = 1; i <= n; i++)
        {
            sum = a + b;
            cout << sum << ",";

            a = b;
            b = sum;
        }
    }

    return 0;
}