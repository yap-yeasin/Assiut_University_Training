#include<bits/stdc++.h>
using namespace std;

void shift_zeros(int n,int arr[])
{   
    int p=0,ans[n]={0};
    for(int r=0;r<n;r++){
        if(arr[r]>0){
            ans[p]=arr[r];
            p++;
        }  
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

}


int main()
{
    int n;
    cin >>n;
    int arr[n];

    for(int r=0;r<n;r++){
        cin>>arr[r];
    }

    shift_zeros(n,arr);
    return 0;

}
