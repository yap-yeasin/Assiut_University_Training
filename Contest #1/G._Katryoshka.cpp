#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll e,m,b,chk;
    cin>>e>>m>>b;
    if(e==0||b==0){
        cout<<0<<endl;
    }
    else if((e==1)||(b==1)){
        cout<<1<<endl;
    }
    else if( e==b && b==m ){
        cout<<e<<endl;
    }
    else{
        ll ans=0;
        if (e < m && e < b){
            chk = e;
        }
        else if (m < e && m < b){
            chk = m;
        }
        else{
            chk = b;
        }

        if(chk==e){
            ans = e;
        }
        else if(chk==m){
            ans=m;
            e=e-m;
            b=b-m;
            if( e>b && (b*2)<e ){
                ans+=b;
            }else{
                ans+=(e/2);
            }
        }
        else{
            ans=b;
        }

        cout<<ans<<endl;
    }
    return 0;
}
