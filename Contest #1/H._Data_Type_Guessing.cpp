#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define intr 2147483647


int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll sum = (a*b)/c;
    ll temp = (a*b)%c; // if it float then it will have reminder 
    if(temp>0){
        cout<<"double"<<endl;
    }           
    else if(sum<=intr && sum>=-intr){
        cout<<"int"<<endl;
    }
    else{
        cout<<"long long"<<endl;
    }
    // cout<<sum<<endl;
    return 0;
}
