#include<bits/stdc++.h>
using namespace std;


void n_arr(int n,int arr1[],int arr2[])
{   
    vector<int> data;
    for(int r=0;r<n;r++){
        data.push_back(arr2[r]);
    }
    for(int r=0;r<n;r++){
        data.push_back(arr1[r]);
    }

    for(auto d:data){
        cout<<d<<" ";
    }

}


int main()
{
    int n;
    cin >>n;
    int arr1[n],arr2[n];

    for(int r=0;r<n;r++){
        cin>>arr1[r];
    }
    for(int r=0;r<n;r++){
        cin>>arr2[r];
    }
    n_arr(n,arr1,arr2);
    return 0;

}
