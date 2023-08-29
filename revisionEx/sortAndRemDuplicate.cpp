#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicatesAndSort(vector<int> arr)
{
    sort(arr.begin(), arr.end()); // Sorting in O(n log n) time

    vector<int> uniqueArr;
    uniqueArr.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
        {
            uniqueArr.push_back(arr[i]);
        }
    }

    return uniqueArr;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> uniqueSortedArr = removeDuplicatesAndSort(arr);

    for (int i = 0; i < uniqueSortedArr.size(); i++)
    {
        cout << uniqueSortedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
