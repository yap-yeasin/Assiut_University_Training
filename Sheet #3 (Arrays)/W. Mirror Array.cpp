#include <bits/stdc++.h>
using namespace std;


int main()
{   
    long int r,c,t,a;
    cin>>r>>c;
    vector<vector<int>> arr(r,vector<int>(c));

    for(int i=0;i<r;i++){
        for(int j=c-1;0<=j;j--){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
