#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int a,b,c,d,mod;
    cin>>a>>b>>c>>d;

    mod = ((a%100)*(b%100)*(c%100)*(d%100))%100;
    if(mod < 10){ 
    cout << 0 << mod <<endl;;
    }
    else{
        cout << mod <<endl;;    
    } 
    return 0;
}
