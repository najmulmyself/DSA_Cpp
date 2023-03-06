#include <bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int> a)
{
    if (a.size() <= 1)
    {
        return a;
    }
    int pivot = a.size() - 1;

    vector<int> b;
    vector<int> c;

    for(int i =0;i<a.size();i++){
        if(i == pivot){
            continue;
        }
        else if(a[i]<pivot){
            b.push_back(a[i]);
        }else{
            c.push_back(a[i]);
        }
    }

    vector<int> sorted_b = quick_sort(b);
    vector<int> sorted_c = quick_sort(c);

    int idx1 = 0;
    int idx2 = 0;

    vector<int> ans;

    for (int i = 0; i < sorted_b.size(); i++)
    {
        ans.push_back(sorted_b[i]);
    }
    ans.push_back(a[pivot]);

    for (int i = 0; i < sorted_c.size(); i++)
    {
        ans.push_back(sorted_c[i]);
    }
    
    return ans;
}

int main()
{
    vector<int> a = {6, 2, 3, 3, 5};
    vector<int> ans = quick_sort(a);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}