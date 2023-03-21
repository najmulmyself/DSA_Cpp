#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m, diff;
    cin >> n >> m;

    if (m > n)
    {
        swap(m, n);
    }

    int nroot = sqrt(n);
    if (n - nroot != 0)
    {
        diff = n - nroot * nroot;
    }

   
    
        if(n ==1 && m== 1){
            cout<<2;
        }else{
             if ((nroot + diff * diff) == m)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
        }
       

    return 0;
}