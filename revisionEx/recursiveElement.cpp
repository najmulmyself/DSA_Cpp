#include <bits/stdc++.h>

using namespace std;

int findMaxRecursive(vector<int> arr, int currentIndex, int currentMax)
{
    if (currentIndex == arr.size())
    {
        return currentMax;
    }

    if (arr[currentIndex] > currentMax)
    {
        currentMax = arr[currentIndex];
    }

    return findMaxRecursive(arr, currentIndex + 1, currentMax);
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int maxElement = findMaxRecursive(arr, 0, arr[0]);

    cout << maxElement << endl;
    return 0;
}