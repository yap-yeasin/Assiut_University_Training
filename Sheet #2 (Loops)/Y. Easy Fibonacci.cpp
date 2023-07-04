#include <bits/stdc++.h>
using namespace std;
 
int main()
{   
    int n,fib,f1,f2;
    cin >>n;
 
    fib = n-2;
    vector<int>fib_d={0,1};
 
    for(int i=0;i<=fib;i++){
        int a = fib_d[i] + fib_d[i+1];
        fib_d.push_back(a);
    }
    for(int d=0; d<fib_d.size()-1;d++){
        cout<<fib_d[d];
        if(d!=fib_d[n]){
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
