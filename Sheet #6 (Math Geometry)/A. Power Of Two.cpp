#include<bits/stdc++.h>
using namespace std;

int main()
{   
    long long int n;
    cin>>n;
    double chk = log2(n) / log2(2);
    if(chk-(int) chk!=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        }
    return 0;
}

// 2^x = n
// xlog2=logn

// log2(n) / log2(2) >> decimal return korte pare 
// log dile wrong khai 32 test case a er jonno log2
// 10 hole 3.3219
// so do - oparation
