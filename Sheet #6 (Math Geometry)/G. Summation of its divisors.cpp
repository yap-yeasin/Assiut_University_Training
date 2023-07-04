#include<bits/stdc++.h>
using namespace std;


int main(){

    long long int n,sum=0;
    cin >>n;

    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){ //n=12
            sum+=i; // 1+2+3+4

            if (i != sqrt(n)){ // sqrt(12) = 3.4641016
                sum += (n / i); //  12+6
            }
        }
        // cout<<"i > "<<i<<endl;
    }
    cout<<sum<<endl;
}

/*
n = 15
sqrt(15) = 3.8729

i = 1 > 1 | 15
i = 2 >  15%2 ==  1 
i = 3 > 3 | 5

1+3+5+15

last seen >> Class 9-10 General Math Book >> page 29 >> example 13 >> used 
this divisors finding methods

*/ 
 
