#include<bits/stdc++.h>
using namespace std;

vector<int> margeVector(int n,vector<int> x,vector<int>y){
    vector<int> final;

    for(int i =0;i<x.size();i++){
      final.push_back(x[i]);
    }
    for(int i =0;i<y.size();i++){
      final.push_back(y[i]);
    }

    return final;
  
}


vector<int> merge_sort(vector<int>a){
    //base case

    if(a.size()<=1){
        return a;
    }
    int mid = a.size()/2;
    // then a vector splitted in two diff vectors
    // let's name it b and c

    vector<int> b;
    vector<int> c;
    // let's now add element to those vector;

    for(int i =0;i<mid;i++){
        b.push_back(a[i]);
    }
    for(int i = mid;i<a.size();i++){
        c.push_back(a[i]);
    }

    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c = merge_sort(c);

// need to return something sorted/ conqueer method


    vector<int> sorted_a;
    // / sort two array into one which are already sorted;

    int idx1 = 0;
    int idx2 = 0;
    //need to check corner case first bcz array range error will be occure;

    for(int i =0;i<a.size();i++){
        if(idx1 == sorted_b.size()){
        sorted_a.push_back(sorted_c[idx2]);
        idx2++;
    }
    else if(idx2 == sorted_c.size()){
        sorted_a.push_back(sorted_b[idx1]);
        idx1++;  
    }
    else if(sorted_b[idx1] < sorted_c[idx2]){
        sorted_a.push_back(sorted_b[idx1]);
        idx1++;
    }
    else{
        sorted_a.push_back(sorted_c[idx2]);
        idx2++;
    }

    }

    return sorted_a;

}

vector<int> removeDuplicates(vector<int> a)
{

    if (a.size() <= 1)
        return a;

    vector<int> newArr;

    int j = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != a[i + 1])
        {
            newArr.push_back(a[i]);
        }
    }


    return newArr;
}

int main(){

    int n;
    vector<int> x ;
    vector<int> y;

    cin>>n;

    for(int i = 0;i<n;i++){
        int temp;
        cin>>temp;
        x.push_back(temp);
    }
    for(int i =0;i<n-1;i++){
        int temp;
        cin>>temp;
        y.push_back(temp);
    }
    
    vector<int> finalMarge = margeVector(n,x,y);
    vector<int> sortedArr = merge_sort(finalMarge);
    vector<int> result = removeDuplicates(sortedArr);
    int sum = 0;
    for(int i = 0;i<result.size();i++){
        sum = sum + result[i];
    }

  

    int nthSum = n*(n+1)/2;


    if(nthSum == sum){
        cout<<"I become the guy.";
    } 
    else{
        cout<<"Oh, my keyboard!";
    }

    return 0;
}


///