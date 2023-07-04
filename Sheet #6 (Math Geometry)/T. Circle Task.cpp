#include<bits/stdc++.h>
using namespace std;


int main(){

    long long a,b,x,y,r,n;
    cin>>a>>b>>r>>n;

    while(n--){
        cin>>x>>y;
        long long chk = (x-a)*(x-a) + (y-b)*(y-b);
        
        if (chk<=(r*r)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}

 
