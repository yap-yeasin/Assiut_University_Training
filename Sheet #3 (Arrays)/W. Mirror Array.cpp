#include <bits/stdc++.h>
using namespace std;

// 1st Solution take input reverse according to the mirror
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

// 2nd Solution swap
int main()
{   
    long int r,c,t,a;
    cin>>r>>c;
    vector<vector<int>> arr(r,vector<int>(c));

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        swap(arr[i][0],arr[i][c-1]);
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
