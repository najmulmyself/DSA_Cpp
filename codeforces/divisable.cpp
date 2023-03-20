#include <bits/stdc++.h>
using namespace std;

vector<int> Solved(int n, vector<int> a, vector<int> b)
{
    vector<int> final;
    for (int i = 0; i < n; i++)
    {

        if (a[i] == b[i])
        {
            final.push_back(0);
        }
        else if (b[i] > a[i])
        {

            final.push_back(b[i] - a[i]);
        }

        else
        {
            // int count = 0;
            // while (a[i] % b[i] != 0)
            // {
            //     // cout << a[i] << "\t" << count << endl;
            //     a[i]++;
            //     count++;
            // }


        if(a[i]%b[i]!=0){
            int d = a[i]/b[i] + 1;
            int value = d * b[i] - a[i];

            final.push_back(value);
        }else{
            final.push_back(0);
        }
        }
    }

    return final;
}

int main()
{

    int n;
    vector<int> a;
    vector<int> b;
    vector<int> result;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tempa;
        int tempb;

        cin >> tempa;
        cin >> tempb;

        a.push_back(tempa);
        b.push_back(tempb);
    }

    vector<int> r = Solved(n, a, b);
    for (int i = 0; i < r.size(); i++)
    {
        cout << r[i] << endl;
    }

    return 0;
}