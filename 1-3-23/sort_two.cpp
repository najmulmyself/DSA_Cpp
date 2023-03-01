#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    vector<int> a1;
    vector<int> b1;
    cin>>a;
    for(int i = 0;i<a;i++){
        int inp;
        cin>>inp;
        a1.push_back(inp);
    }
    cin>>b;
    for(int i = 0;i<b;i++){
        int inp;
        cin>>inp;
        b1.push_back(inp);
    }
    vector<int> ans;
    int idx1 = 0;
    int idx2 = 0;
    if(a>b){
        for(int i =0;i<a+b;i++){
            if(idx1 == a1.size()){
                ans.push_back(b1[idx2]);
                idx2++;
            }
            else if (idx2 == b1.size()){
                ans.push_back(a1[idx1]);
                idx1++;
            }
            else if(a1[idx1]>b1[idx2]){
                ans.push_back(a1[idx1]);
                idx1++;
            }else{
                ans.push_back(b1[idx2]);
                idx2++;
            }
        }
    }else{
         for(int i =0;i<b+a;i++){
            if(idx1 == a1.size()){
                ans.push_back(b1[idx2]);
                idx2++;

            }
            else if (idx2 == b1.size()){
                ans.push_back(a1[idx1]);
                idx1++;
            }
            else if(a1[idx1]<b1[idx2]){
                ans.push_back(b1[idx2]);
                idx2++;
            }else{
                ans.push_back(a1[idx1]);
                idx1++;

            }
        }
    }


    for(int i =0;i<ans.size();i++){
        cout<<ans[i] << " ";
    }
}