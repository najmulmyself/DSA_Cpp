#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> a,int k){
    int left = 0;
    int right = a.size()-1;
    int count =0;


    while (left<=right)
    {   
    int mid = left+right/2;
        if(k == a[mid]){
            count++;
            cout<< "found mid at line 13";
            if(a[mid+1]== k){
                count++;
                break;
            }
        }
         if(k<a[mid]){
            right = mid-1;
        }
        else{
            left = mid +1;
        }
    }
    return count;
}

int main(){
    // vector<int> a = {1,3,4,5,6,6,9,17};
    vector<int> a = {1, 2, 3,4, 4, 5, 6, 7, 8, 9 ,10};
    int k = 4;

    int count = binary_search(a,k);
    if(count > 1){
        cout<<"Yes"<<count;

        }else {
            cout<<"NO";
    }

    return 0;
}