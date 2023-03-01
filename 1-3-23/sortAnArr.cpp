#include<bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int>a){
    if(a.size()<=1){
        return a;
    }
    int mid = a.size()/2;

    vector<int>b;
    vector<int>c;

    for(int i =0;i<mid;i++){
        b.push_back(a[i]);
    }
    for(int i =mid;i<a.size();i++){
        c.push_back(a[i]);
    }

    vector<int> sorted_b = merge(b);
    vector<int> sorted_c = merge(c);

    int idx1 =0;
    int idx2 = 0;
    vector<int> ans ;

    for(int i =0;i<a.size();i++){
        if(idx1 == b.size()){
            ans.push_back(c[idx2]);
            idx2++;
        }
        else if(idx2 == c.size()){
            ans.push_back(b[idx1]);
            idx1++;
        }
        else if(b[idx1]<c[idx2]){
            ans.push_back(b[idx1]);
            idx1++;
        }
        else{
            ans.push_back(c[idx2]);
            idx2++;
        }
    }
    return ans;
}
int main(){
   int count;
   vector<int>a;
   cin>>count;
   for(int i =0;i<count;i++){
    int tempElement;
    cin>>tempElement;
    a.push_back(tempElement);
   }

   vector<int> answer = merge(a);

   for(int i =0;i<answer.size();i++){
    cout<<answer[i]<<" ";
   }

}