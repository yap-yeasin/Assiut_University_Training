#include<bits/stdc++.h>
using namespace std;

int main(){

    long long a,aa,bb,b,x,sum=0,temp,n;

    cin>>aa>>bb>>x;

    a = min(aa, bb);
    b = max(aa, bb);

    if (a%x != 0) {
        a += x - a%x; // Round up to the next multiple of x
    }

    if (b%x != 0) {
        b -= b%x; // Round down to the previous multiple of x
    }

    n = (double)(b-a)/x + 1; // Use floating-point division to avoid rounding errors
    sum = n*(2*a + (n-1)*x)/2;

    cout<<sum<<endl;
    return 0;
}
// In this code, this code handle the case where there are no numbers 
// between a and b that are divisible by x by checking if a is greater than b after rounding. 
// This code also round up a to the next multiple of x and round down b to the previous multiple of x. 
// Finally, This code use floating-point division to calculate n and (n/2) to avoid rounding errors.
