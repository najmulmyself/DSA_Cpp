#include<bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int> a){
    if(a.size()<=1){
        return a;
    }
    int pivot = a.size()-1;

    vector<int> b;
    vector<int> c;

    for (int i = 0; i <pivot; i++)
    {
        b.push_back(a[i]);
    }
    for(int i =pivot+1;i<a.size();i++){
        c.push_back(c[i]);
    }
    

    vector<int> sorted_b = quick_sort(b);
    vector<int> sorted_c = quick_sort(c);

    
}

int main(){
    return 0;
}