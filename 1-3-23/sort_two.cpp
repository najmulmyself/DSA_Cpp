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
    if(a>b){
        for(int i =0;i<a;i++){
            if(i == a1.size()){
                ans.push_back(b1[i]);
            }
            else if (i == b1.size()){
                ans.push_back(a1[i]);
            }
            else if(a1[i]>b1[i]){
                ans.push_back(a1[i]);
            }else{
                ans.push_back(b1[i]);

            }
        }
    }else{
         for(int i =0;i<b;i++){
            if(i == a1.size()){
                ans.push_back(b1[i]);
            }
            else if (i == b1.size()){
                ans.push_back(a1[i]);
            }
            else if(a1[i]<b1[i]){
                ans.push_back(b1[i]);
            }else{
                ans.push_back(a1[i]);

            }
        }
    }


    for(int i =0;i<ans.size();i++){
        cout<<ans[i] << " ";
    }
}