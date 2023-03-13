#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> a,int n){
    int vectorSum = 0;
    int nthArrSum;
    for(int i = 0;i<a.size();i++){
        vectorSum = vectorSum + a[i];
    }
    // nth sum = n(n+1)/2;
    nthArrSum = n*(n+1)/2;
    return nthArrSum - vectorSum;

}

int main(){
    int n;
    vector<int> a;

    cin>>n;
    for(int i =0;i<n-1;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    int missingN = missingNumber(a,n);
    cout<<missingN;

}