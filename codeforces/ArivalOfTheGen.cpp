#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,max,min;
    int min_index ;
    int max_index;
    cin >> n;

    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        a.push_back(temp);

        if(i>0){
            if(a[i]>a[max]){
                max = i;
            }
            if(a[i]<=a[min]){
                min =i;
            }

        }else{
            min = i;
            max = i;
        }
       
    }

        //     max = 0;
        //     max_index = 0;
        //     min_index = 0;
        // for(int i =0;i<a.size();i++){
        //     if(max<=a[i] ){
        //         max = a[i];
        //         max_index = i;
        //     }
        //     if(max ==a[0]){
        //         max_index = 0;
        //     }

        // }
        //     min = 11111111;
        // for(int i =0;i<a.size();i++){
        //     if(min>=a[i]){
        //         min = a[i];
        //         min_index = i;
        //     }
        //     if(min == a[a.size()-1]){
        //         min_index = a.size()-1;
        //     }

        // }

        
        // cout << max_index<<endl;
        // cout << min_index<<endl;

            int moves = 0;
        if(max<min){

            int min_moves = (n-1) - min;
            int max_moves = max;
        moves = min_moves + max_moves;
        }else{
            int max_moves = max;
            int min_moves = (n-1)-(min+1);

            // cout<<max_moves<<"\t"<<min_moves<<endl;

            moves = max_moves + min_moves;
        }

        cout<<moves;

    return 0;
}