#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArr(vector<int> arr)
{
    for (int i = 0; i < arr.size() / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[arr.size() - 1 - i];
        arr[arr.size() - 1 - i] = temp;
    }
    return arr;
}
int main()
{
    int size;
    vector<int> arr;

    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    vector<int> revArr = reverseArr(arr);

    for (int i = 0; i < revArr.size(); i++)
    {
        cout << revArr[i] << " ";
    }
    return 0;
}