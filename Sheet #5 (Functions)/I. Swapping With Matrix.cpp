#include<bits/stdc++.h>
using namespace std;


void swap_num(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}


int main()
{
    int n,x,y;
    cin >>n>>x>>y;
    int arr[n][n];


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // cout<<endl;

    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            if(c==x-1){
                swap_num(arr[r][x-1],arr[r][y-1]);
            }
        }
    }

    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            if(r==x-1){
                swap_num(arr[x-1][c],arr[y-1][c]);
            }
        }
    }
    // Print
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
