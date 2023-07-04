#include<bits/stdc++.h>
using namespace std;

// Using recursion

long long fac(long long n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fac(n - 1);
}

int main()
{
    long long a,b,per,com;
    cin>>a>>b;

    per = (fac(a)/fac(a-b));
    com = (fac(a)/(fac(b)*fac(a-b)));

    cout<<com<<" "<<per<<endl;

}
