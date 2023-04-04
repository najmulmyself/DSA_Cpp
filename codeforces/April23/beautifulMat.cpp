#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5], index1, index2;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int temp;
            cin >> temp;
            if (temp == 1)
            {
                index1 = i;
                index2 = j;
            }
        }
    }
    int res =abs(index2 - 3) + abs(index1-3);

    cout << res;
    return 0;
}