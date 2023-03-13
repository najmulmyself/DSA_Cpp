#include<bits/stdc++.h>
using namespace std;
vector<int> remove_range(vector<int> a,int start,int stop){
    vector<int> final_arr;
    for(int i =0;i<a.size();i++){
        if(i >=start-1 && i <=stop-1){
            continue;
        }else{
            final_arr.push_back(a[i]);
        }
    }
        return final_arr;
}
int main(){

    vector<int> a ;
    int n,r1,r2 ;
    cin>>n;
    for(int i =0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    cin>>r1;
    cin>>r2;
    vector<int> final = remove_range(a,r1,r2);
    for(int i =0;i<final.size();i++){
        cout<<final[i]<<" ";
    }
    return 0;
}