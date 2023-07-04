#include<bits/stdc++.h>
using namespace std;

void odd_re(int n){
    int x;
    if(n==0){
        return;
    }
    cin>>x;
    odd_re(n-1);
    if(n%2==0) cout<<x<<" ";
}
void even_re(int n){
    int x;
    if(n==0){
        return;
    }
    cin>>x;
    even_re(n-1);
    if(n%2!=0) cout<<x<<" ";
}

int main(){
    int n;
    cin>> n;
    if(n%2==0){
        odd_re(n);
    }   
    else{
        even_re(n);
    } 
}
