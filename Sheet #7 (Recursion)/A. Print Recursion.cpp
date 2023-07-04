#include<bits/stdc++.h>
using namespace std;
int re(int n){
    if(n==0){
        return n;
    }
    cout<<"I love Recursion"<<endl;
    return re(n-1);
}
int main(){
    int n;
    cin>> n;
    re(n);
}
