#include<bits/stdc++.h>
using namespace std;

vector<int> even_generator(vector<int> a){
    vector<int>evenElement;
    for(int i =0 ;i<a.size();i++){
        if(a[i]%2 == 0){
            evenElement.push_back(a[i]);
        }
    }
    return evenElement;
}

int main(){

    vector<int> a = {1,2,3,4,5};
    vector<int> result = even_generator(a);

    for(int i =0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}