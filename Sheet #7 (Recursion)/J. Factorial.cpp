#include <iostream>
using namespace std;
long long fac(int n,long long ans=1){
    if(n==1){
        return ans;
    }
    ans*=n;
    return fac(n-1,ans);
}

int main() {
    int n;
    cin>>n;
    cout<<fac(n)<<endl;
}
