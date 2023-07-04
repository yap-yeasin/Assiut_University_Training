#include <bits/stdc++.h>
using namespace std;
 
int main()
{   
    int r;
    int c=0,ans1=0,ans2=0;
    cin >>r;
    vector<vector<long int>>arr_d(r,vector<long int>(r));

    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cin >> arr_d[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(i==j){
                ans1=ans1 + arr_d[i][j];
            }
            if ((i+j)==(r-1)){
                ans2=ans2 +arr_d[i][j];
            }
        }
    }
    cout<<abs(ans1-ans2)<<endl;
    return 0;
}
