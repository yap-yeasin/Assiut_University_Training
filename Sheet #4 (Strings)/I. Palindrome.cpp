#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s,t,rev;
    cin>>t;
    s=t;
    reverse(t.begin(), t.end());
    if(t==s){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
