#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    // cout<<s;
    for(int i = 0;i<s.size();i++){
        if(s[i] == '+'){
            continue;
        }
        else{
            cout<<s[i];
        }
        if(i !=s.size()-1){
            cout<<"+";
        }
    }
    return 0;
}