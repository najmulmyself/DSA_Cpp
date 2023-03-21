#include<bits/stdc++.h>
using namespace std;


void Solved(string s){
    vector<char> newS ;
    vector<char> ::iterator range; 
    for(int i  =0;i<s.size();i++){
        if(islower(s[i])){
            newS.push_back(s[i]);
            continue;
        }else{
            newS.push_back(tolower(s[i]));
        }
    }

    sort(newS.begin(),newS.end());
    range =  unique(newS.begin(),newS.end());


    newS.resize(distance(newS.begin(),range));
   
    if(newS.size()<26){
        cout<<"NO";
    }else{
        cout<<"YES";
    }

    // for(auto u:newS) cout<<u<<" ";

}
int main(){
    int n;
    string s;

    cin>>n;
    cin>>s;

    if(s.size()>=26){
        Solved(s);
    }else{
        cout<<"NO";
    }


    return 0;
}