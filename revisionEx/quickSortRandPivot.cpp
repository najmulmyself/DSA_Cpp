#include <bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int> a)
{
    if (a.size() <= 1)
    {
        return a;
    }

    int pivotIndex = rand() % a.size();
    int pivot = a[pivotIndex];

    vector<int> left, right;

    for (int i = 0; i < a.size(); i++)
    {
        if (i == pivotIndex)
        {
            continue;
        }
        if (a[i] >= pivot)  
        {
            left.push_back(a[i]);
        }
        else
        {
            right.push_back(a[i]);
        }
    }

    vector<int> sortedLeft = quick_sort(left);
    vector<int> sortedRight = quick_sort(right);

    vector<int> sorted_a;

    for (int i = 0; i < sortedLeft.size(); i++)
    {
        sorted_a.push_back(sortedLeft[i]);
    }
    sorted_a.push_back(pivot);

    for (int i = 0; i < sortedRight.size(); i++)
    {
        sorted_a.push_back(sortedRight[i]);
    }

    return sorted_a;
}

int main()
{
       int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> sorted_a = quick_sort(a);

    for (int i = 0; i < sorted_a.size(); i++)
    {
        cout << sorted_a[i] << " ";
    }

    return 0;
}
