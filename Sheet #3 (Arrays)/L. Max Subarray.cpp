#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin >> t;

    for (int iter = 0; iter < t ; iter++)
    {
        int n,in_a;
        cin>>n;
        int arr[n];

        for (int arr_i = 0; arr_i < n; arr_i++)
        {
            cin>> in_a;
            arr[arr_i]=in_a;
        }

        // cout<<" "<<endl;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int mx= -9999999;
                for (int a = i; a <=j; a++){
                    // cout<<arr[a]<<endl;
                    mx=max(mx,arr[a]);
                }
                cout<<mx<<" ";
            }
        }
        cout<<endl;
    }

}
