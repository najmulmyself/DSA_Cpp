#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> s;


    for(int i=0;i<n;i++){
        string tempS;
        cin>>tempS;
        s.push_back(tempS);
    }


    int x= 0;
    for (int i = 0; i < n; i++)
    {
    if(s[i]=="X++" || s[i] == "++X"){
        x++;

    }else{
        x--;
    }
        
    }

    cout<<x;
    
    return 0;
}