#include <bits/stdc++.h>
using namespace std;

void reverseFunc(vector<int> perm)
{
    reverse(perm.begin(),perm.end());
    for (int i = 0; i < perm.size(); i++)
    {
        cout << perm[i] << " ";
    }
}
void midReverse(vector<int> perm)
{
    reverse(perm.begin(),perm.end());
    int mid = perm.size() / 2;
    swap(perm[mid], perm[mid + 1]);
    for (int i = 0; i < perm.size(); i++)
    {
        cout << perm[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> perm;

    for (int i = 1; i <= n; i++)
    {
        perm.push_back(i);
    }

    if (n == 1 || n%2!=0)
    {
        cout << -1;
    }
    else if (n % 2 == 0)
    {
        reverseFunc(perm);
    }

    return 0;
}