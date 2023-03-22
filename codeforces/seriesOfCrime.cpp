#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char mat[n][m];
    vector<int> iIndex;
    vector<int> jIndex;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            char temp;
            cin >> temp;
            if (temp == '*')
            {
                iIndex.push_back(i);
                jIndex.push_back(j);
            }
        }
    }

    // if (iIndex[0] == iIndex[1])
    // {
    //     cout << iIndex[2] << " ";
    // }else{
    //     cout<<iIndex[0]<<" ";
    // }
    // if (jIndex[0] == jIndex[1])
    // {
    //     cout << jIndex[2]<< " ";
    // }else{
    //     cout<<jIndex[0]<<" ";
    // }

    // for(int i= 0;i<iIndex.size();i++){
    //     int count = 1;

        
    // }

    if(iIndex[0] == iIndex[1] && jIndex[0] == jIndex[2] ){
        cout<<iIndex[2]<<" "<<jIndex[1];
    }
    if(iIndex[0] == iIndex[1] && jIndex[0] != jIndex[2] ){
        cout<<iIndex[2]<<" "<<jIndex[0];
    }
    if(iIndex[1]== iIndex[2] && jIndex[0]==jIndex[1]){
        cout<<iIndex[0]<<" "<<jIndex[2];
    }
     if(iIndex[1]== iIndex[2] && jIndex[0]!=jIndex[1]){
        cout<<iIndex[0]<<" "<<jIndex[1];
    }

   

    return 0;
}

