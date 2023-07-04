#include <iostream>
using namespace std;
long long re(int n,long long ans=0){
    if(n==0){
        return ans;
    }
    int x;
    cin>>x;
    ans+=x;
    return re(n-1,ans);
}

int main() {
    int n;
    cin>>n;
    cout<<re(n)<<endl;
}
