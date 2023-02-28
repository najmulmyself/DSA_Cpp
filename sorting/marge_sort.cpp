#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int>a){
    //base case

    if(a.size()<=1){
        return a;
    }
    int mid = a.size()/2;
    // then a vector splitted in two diff vectors
    // let's name it b and c

    vector<int> b;
    vector<int> c;
    // let's now add element to those vector;

    for(int i =0;i<mid;i++){
        b.push_back(a[i]);
    }
    for(int i = mid;i<a.size();i++){
        c.push_back(a[i]);
    }

    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c = merge_sort(c);

// need to return something sorted/ conqueer method


    vector<int> sorted_a;
    // / sort two array into one which are already sorted;

    int idx1 = 0;
    int idx2 = 0;
    //need to check corner case first bcz array range error will be occure;

    for(int i =0;i<a.size();i++){
        if(idx1 == sorted_b.size()){
        sorted_a.push_back(sorted_c[idx2]);
        idx2++;
    }
    else if(idx2 == sorted_c.size()){
        sorted_a.push_back(sorted_b[idx1]);
        idx1++;  
    }
    else if(sorted_b[idx1] < sorted_c[idx2]){
        sorted_a.push_back(sorted_b[idx1]);
        idx1++;
    }
    else{
        sorted_a.push_back(sorted_c[idx2]);
        idx2++;
    }

    }

    return sorted_a;

}

int main(){
    vector<int> a = {993,415,900,472,369,733,420,637};
    vector<int> ans = merge_sort(a);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<< " ";
    }

    return 0;
}
  