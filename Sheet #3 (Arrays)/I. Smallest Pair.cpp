#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin >>t;

    for (int iter = 0; iter <t ; iter++)
    {
        long long arr_l,sum,in_a,ans= LONG_LONG_MAX;
        vector<int> vec_data;
        cin >>arr_l;
        int arr[arr_l];

        for (int arr_i = 0; arr_i < arr_l; arr_i++)
        {
            cin>> in_a;
            arr[arr_i]=in_a;
        }

        for(int i=1; i<=arr_l; i++){
            for(int j=i+1; j<=arr_l; j++){
                int a = i-1;
                int b = j-1;
                sum = (arr[a]+arr[b])+(j-i);
                // cout<<"a="<<a<<"  b="<<b<<"  i="<<i<<"  j="<<j<<"  sum="<<sum<<endl;
                // vec_data.push_back(sum);
                ans = min(sum,ans);
            }
        }
        // sort(vec_data.begin(),vec_data.end());
        // cout<<vec_data[0]<<endl;
        // for(int d:vec_data){
        //     cout<<d<<" ";
        // }
        cout<<ans<<endl;

    }
}
