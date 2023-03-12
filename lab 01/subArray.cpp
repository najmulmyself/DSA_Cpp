#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int> a)
{
    if (a.size() <= 1)
    {
        return a;
    }

    int mid = a.size() / 2;

    vector<int> b;
    vector<int> c;

    for (int i = 0; i < mid; i++)
    {
        b.push_back(a[i]);
    }

    for (int i = mid; i < a.size(); i++)
    {
        c.push_back(a[i]);
    }

    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c = merge_sort(c);

    vector<int> ans;
    int idx1 = 0;
    int idx2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (idx1 == sorted_b.size())
        {
            ans.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if (idx2 == sorted_c.size())
        {
            ans.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if (sorted_b[idx1] < sorted_c[idx2])
        {
            ans.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            ans.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    // for(int i =0;i<ans.size();i++){
    //     if()
    // }

    return ans;
}

vector<int> removeDuplicates(vector<int> a)
{

    if (a.size() <= 1)
        return a;

    vector<int> newArr;

    int j = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != a[i + 1])
        {
            // newArr[j] = a[i];
            newArr.push_back(a[i]);
            // j++;
        }
    }

    // newArr[newArr.size()] = a[a.size()-1];
    // newArr.push_back(a[a.size() - 1]);
    //   ///////////////////////////////////////
    // newArr[j++] = a[a.size()];

    // for (int i = 0; i < j; i++)
    // 	arr[i] = temp[i];

    return newArr;
}

int main()
{
    int a1Count;
    int a2Count;
    vector<int> a1;
    vector<int> a2;
    cin>>a1Count;
    for(int i  = 0;i<a1Count;i++){
        int temp ;
        cin>>temp;
        a1.push_back(temp);
    }
    cin>>a2Count;
    
    for(int i  = 0;i<a2Count;i++){
        int temp ;
        cin>>temp;
        a2.push_back(temp);
    }
    int greaterArr = 0;
    if (a1.size() >= a2.size())
    {
        greaterArr = a1.size();
    }
    else
    {
        greaterArr = a2.size();
    }
    vector<int> a;
    for (int i = 0; i < a1.size(); i++)
    {
        a.push_back(a1[i]);
    }
    for (int i = 0; i < a2.size(); i++)
    {
        a.push_back(a2[i]);
    }
    vector<int> ans = merge_sort(a);
    vector<int> distinctEl = removeDuplicates(ans);

    if (distinctEl.size() == greaterArr)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    // for (int i = 0; i < distinctEl.size(); i++)
    // {
    //     cout << distinctEl[i] << " ";
    // }
    return 0;
}