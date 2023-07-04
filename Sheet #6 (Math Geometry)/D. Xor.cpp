#include<bits/stdc++.h>
using namespace std;
long long  xor_chk(long long a,long long b,long long q){


    if(q==1){
        return a;
    }
    else if(q==2){
        return b;
    }
    else if(q>=3){
        long long res = q%3;
        if(res == 0){
            return (a^b);
        }
        else if ( res == 1){
            return a;
        }
        else if( res == 2){
            return b;
        }
    }
    return 0;
}

int main(){

    long long a,b,q;   
    cin >>a>>b>>q;
    
    cout<< xor_chk(a,b,q)<<endl;  
}

// 5^3 = 6 
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
// 5 3 6 5 3 6 5 3 6 5  3  6  5  3  6  5  3  6 
// 1 2 0 1 2 0 1 2 0 1  2  0  1  2  0  1  2  0  // q%3 
