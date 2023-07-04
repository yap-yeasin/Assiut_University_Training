#include<bits/stdc++.h>
using namespace std;
void re(int n){
    if(n==0){
        return;
    }
    cout<<n;
    if(n!=1){
        cout<<" ";
    }
    return re(n-1);
}
int main(){
    int n;
    cin>> n;
    re(n);
}
