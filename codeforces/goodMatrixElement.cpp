#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    int arr[n + 1][n + 1];

    int mid = (n / 2) + 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int temp;
            cin >> temp;

            arr[i][j] = temp;
            if (i == j)
            {
                sum = sum + temp;
                // continue;
            }

            else if ((i + j) == (n + 1))
            {
                sum = sum + temp;
                // continue;
            }

            else if (mid == j || mid == i)
            {
                sum = sum + temp;
                // continue;
            }
            // cout << sum << " JJJ" << endl;
        }
    }

    // sum = sum - arr[mid][mid] * 3;

    cout << sum << endl;

    return 0;
}