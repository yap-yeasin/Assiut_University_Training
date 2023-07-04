#include <bits/stdc++.h>
using namespace std;

int rev_num(long long n){
    long long rev=0, temp;
    while(n != 0) {
        temp = n % 10;
        rev = rev * 10 + temp;
        n /= 10;
        }
    return rev;
}



int main()
{
    long long num, rev_n,rev1;
    cin>>num;
    rev_n = rev_num(num);
    if( num==rev_n){
        cout<<num<<endl;
        cout<<"YES"<<endl;
    }
    else{
        // rev1 = first2Digit(num);
        cout<<rev_n<<endl;
        cout<<"NO"<<endl;
    }

   
   return 0;
}
