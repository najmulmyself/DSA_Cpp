#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;

    cin>>s;
    vector<char> newChar;

    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    char singleChar = s[0];

    for(int i =0;i<s.size();i++){
        if(singleChar == s[i]){
            newChar.push_back(s[i]);
        }
    }
    for(int i=0;i<newChar.size();i++){
        cout<<newChar[i];
    }
    return 0;
}