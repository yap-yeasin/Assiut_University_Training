#include<bits/stdc++.h>
using namespace std;
void digit(long long x){
    if(x<10){
        cout<<x<<" ";
        return;
    }
    // cout<<x%10<<" ";
    digit(x/10);
    cout<<x%10<<" ";
    // if(x!=0){
    //     cout<<" ";
    // }
}

void re(int n){
    long long x;
    if(n==0){
        return;
    }
    cin>>x;
    digit(x);
    cout<<endl;
    re(n-1);
}
int main(){
    int n;
    cin>> n;
    re(n);
}
