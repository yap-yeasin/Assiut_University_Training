#include <bits/stdc++.h>
using namespace std;
 
int main()
{   
    long long int a,n;
    cin >>n;
 
    vector<long long int>fib_d={0,1};
 
    for(int i=0;i<=n-1;i++){
        a = fib_d[i] + fib_d[i+1];
        fib_d.push_back(a);
    }
    cout<<fib_d[n-1]<<endl;
    return 0;
}
