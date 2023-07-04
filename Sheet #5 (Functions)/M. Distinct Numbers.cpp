#include<bits/stdc++.h>
using namespace std;

// 9
// 1 2 2 4 5 6 6 7 8

void distinct(int n,int arr[])
{   
    int t=0,p=0;
    sort(arr,arr+n);
    for(int r=0;r<n;r++){
        if(arr[r]!=arr[r+1]){
            t++;
        }  
    }
    cout<<t<<endl;

}


int main()
{
    int n;
    cin >>n;
    int arr[n];

    for(int r=0;r<n;r++){
        cin>>arr[r];
    }

    distinct(n,arr);
    return 0;

}
