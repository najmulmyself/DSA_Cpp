#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<string> s;

    for(int i = 0;i<n;i++){
        string temps;

        cin>>temps;
        s.push_back(temps);
    }

    for(int i =0;i<s.size();i++){
        if(s[i].size()<=10){
            cout<<s[i]<<endl;
        }else{
            int size = s[i].size()-2;

            cout<<s[i][0]<<size<<s[i][s[i].size()-1]<<endl;
        }
    }
    return 0;
}