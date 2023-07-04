#include<bits/stdc++.h>
using namespace std;

bool chk_prime(long long n)
{
    if(n==1){
        return false;
    }
    // for(int i=sqrt(n);i >= 2; i--){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n;
        cin >>n;
        
        if(chk_prime(n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}
