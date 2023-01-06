#include<bits/stdc++.h>

using namespace std;

int main(){
    int n ;
    float pos=0,neg=0,zero=0;
    cin>>n;
    vector<int> arr[n];

    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        arr->push_back(a);
        if(a>0){
            pos++;
        }else if(a<0){
            neg++;

        }else{
            zero++;

        }



    }

    cout<< fixed << setprecision(6)<< pos/n << endl;
    cout<<fixed << setprecision(6)<<neg/n<< endl;
    cout<<fixed << setprecision(6)<<zero/n;
}