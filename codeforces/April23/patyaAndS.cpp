#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;

    cin>>s1>>s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);


// cout<<s1<<'\t'<<s2;
    
    if(s1==s2){
        cout<<0;
    }else{
        for(int i =0;i<s1.size();i++){
        if(s1[i]>s2[i] && s1[i] != s2[i]){
            cout<<1;
            return 0;
        }
       
    }
    cout<<-1;
    }
    
    return 0;
}