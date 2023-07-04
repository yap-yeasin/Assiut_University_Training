#include<bits/stdc++.h>
using namespace std;

// a x b = LCM(a, b) * GCD (a, b)

long long GCD(long long a, long long b)
{
    if(a%b==0){
        return b;
    }

    return GCD(b,a%b);
    // old school method
}

int main() {
    long long a,b,temp, gcd;

    cin >> a >>b;

    // if a is greater than b then swap it
    if (a > b) {   
        temp =a;
        a = b;
        b = temp;
    }

    gcd = GCD(a,b);
    cout << gcd<<" "<<(a*b)/gcd;

    return 0;
}
/*
a = 12
b = 18

18%12 = 6
        12%6=0
        return 6

 */ 
