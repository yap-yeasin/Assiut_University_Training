#include<bits/stdc++.h>
using namespace std;
void re(int n){
    if(n==0){
        return;
    }
    re(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>> n;
    re(n);
}
 
