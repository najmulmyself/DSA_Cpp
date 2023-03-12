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
        else if(a[i]<a[pivot]){
            c.push_back(a[i]);
        }else{
            b.push_back(a[i]);
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
    int n;
    vector<int> a;
    cin>>n;
    
    for(int i = 0;i<n;i++){
        int temp ;
        cin>>temp;
        a.push_back(temp);
    }
    vector<int> ans = quick_sort(a);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}