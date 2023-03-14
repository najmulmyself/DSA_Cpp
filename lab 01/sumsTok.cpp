#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int> a, int k)
{
    // base case

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

    vector<int> sorted_b = merge_sort(b, k);
    vector<int> sorted_c = merge_sort(c, k);

    vector<int> sorted_a;

    int idx1 = 0;
    int idx2 = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (idx1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if (idx2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if (sorted_b[idx1] < sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }

    int left = 0, count = 0;
    int right = sorted_a.size() - 1;
    // for(int i=0;i<sorted_a.size();i++){
    //     if((right-left)==1){
    //         cout<<count;
    //         break;
    //     }

    //     //1 2 3 4 6

    //     // else{
    //     //     // left++;
    //     //     right--;
    //     // }

    // }

    while (left < right)
    {
        // cout<<"loop activate"<<endl;
        if (sorted_a[left] >= k)
        {
            left++;
        }
         if (sorted_a[right] >= k)
        {
            right--;
        }
         if ((sorted_a[left] + sorted_a[right]) == k)
        {
            count++;
            right--;
            left++;
        }
        else{
            left++;
            right--;
        }
       
    }
        cout<<count<<endl;

    return sorted_a;
}

int main()
{
    // vector<int> a = {6, 1, 3, 2, 4};
    vector<int> a = {6, 1, 3,9,8, 2, 4};
    vector<int> ans = merge_sort(a, 10);
    // for(int i = 0;i<ans.size();i++){
    //     cout<<ans[i]<< " ";
    // }

    return 0;
}
