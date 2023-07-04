#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long re(long long n,long m,long long data[],long chk=0,long long ans=0){
    if(m==chk){
        return ans;
    }
    ans+=data[n-1];
    chk++;
    return re(n-1,m,data,chk,ans);
}

int main() {
    long long n,m;
    cin>>n>>m;
    long long data[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        data[i]=x;
    }
    cout<<re(n,m,data)<<endl;

}
