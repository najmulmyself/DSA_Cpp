#include<bits/stdc++.h>
using namespace std;

void binary_search(vector<int> a,int k){
    int left = 0;
    int right = a.size()-1;


    while (left<=right)
    {   
    int mid = left+right/2;
        if(k == a[mid]){
            cout<< "found mid at line 13";
        }
        else if(k<a[mid]){
            right = mid-1;
        }
        else{
            left = mid +1;
        }
    }
    
}

int main(){
    vector<int> a = {1,3,4,5,6,6,9,17};
    int k = 6;

    binary_search(a,k);
    return 0;
}