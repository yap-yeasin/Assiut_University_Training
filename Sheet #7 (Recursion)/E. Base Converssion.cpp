#include<bits/stdc++.h>
using namespace std;
void d2b(int x){
    if(x%2==0 && x < 1 ){
        return;
    }

    d2b(x/2);
    cout<<x%2;
}

void re(int n){
    int x;
    if(n==0){
        return;
    }
    cin>>x;
    d2b(x);
    cout<<endl;
    re(n-1);
}
int main(){
    int n;
    cin>> n;
    re(n);
}
