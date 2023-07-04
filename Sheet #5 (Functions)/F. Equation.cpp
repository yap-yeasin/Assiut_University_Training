#include<bits/stdc++.h>
using namespace std;

long long power(int base,int base_pow)
{
    long long result = 1;
    while (base_pow--){
        result *= base;
    }

    return result;
}

long long equ(int p,int b)
{   
    long long sum = 0;
    for(int i=2;i<=b;i=i+2){
        sum=sum+(power(p,i));
        // cout<<sum<<endl;
    }
    // cout<<sum<<endl;
    return sum;
}


int main()
{
    int a,p;
    cin >>a>>p;
    cout<<equ(a,p)<<endl;

    return 0;

}
