#include <bits/stdc++.h>
using namespace std;
 
int main()
{   
    long int r,c,x;
    bool chk = false;
    cin >>r>>c;
    vector<vector<long int>>arr_d(r,vector<long int>(c));

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> arr_d[i][j];
        }
    }
    cin>>x;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(x==arr_d[i][j]){
                chk = true;
            }

        }
    }

    if(chk){
        cout<<"will not take number"<<endl;
    }
    else{
        cout<<"will take number"<<endl;
    }

    return 0;
}
