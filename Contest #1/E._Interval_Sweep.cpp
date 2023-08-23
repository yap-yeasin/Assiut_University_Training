#include<bits/stdc++.h>
using namespace std;
// # define ll long long 

int main()
{
    int a,b;
    cin>>a>>b;
    int sum = a+b;
    if((sum%2!=0 && ((a-b==1)||(b-a==1))) || (sum%2==0 && a==b) && a!=0 && b!=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
