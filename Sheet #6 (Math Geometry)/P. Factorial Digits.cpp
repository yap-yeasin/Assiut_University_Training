#include<bits/stdc++.h>
using namespace std;

long long fac_digit ( long long n ) {
    double x = 0;
    for ( long long i = 1; i <= n; i++ ) {
        x += log10 ( i );
    }
        long long res = x + 1 ;
        return res;
    }


int main()
{
    long long a,c,cnt;
    cin>>a;

    cout<<"Number of digits of "<<a<<"! is "<<fac_digit(a)<<endl;

}
