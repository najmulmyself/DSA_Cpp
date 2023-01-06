#include<bits/stdc++.h>
using namespace std;

int main(){
    int aPoints=0,bPoints=0;
    vector<int> alice(3);
    vector<int> bob(3);

    for(int i =0;i<3;i++){
        int a;
        cin>>a;
        alice[i] = a;
    }
    for(int i =0;i<3;i++){
        int b;
        cin>>b;
        bob[i] = b;
    }

    
    for(int i =0;i<3;i++){
        if(alice[i]>bob[i]){
            aPoints++;

        }
        else if(bob[i]> alice[i]){
            bPoints++;
        }
        else if(alice[i]==bob[i]){

        }
    }

    cout<<aPoints<< " "<<bPoints;
}