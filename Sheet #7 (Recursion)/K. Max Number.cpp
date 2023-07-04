#include <iostream>
using namespace std;
int re(int n,long t= -99999999999){
    if(n==0){
        return t;
    }
    int x;
    cin>>x;
    if(x>t){
        t=x;
    }
    return re(n-1,t);
}

int main() {
    int n;
    cin>>n;
    cout<<re(n)<<endl;
}
