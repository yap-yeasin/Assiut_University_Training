#include<bits/stdc++.h>
using namespace std;

int firstDigit(int n)
{
    // Find total number of digits - 1
    int digits = (int)log10(n);
 
    // Find first digit
    n = (int)(n / pow(10, digits));
 
    // Return first digit
    return n;
}

int main()
{
    int X;
    cin >> X;
    if (firstDigit(X)%2==0){
        cout<<"EVEN"<<endl;
    }
    else{
        cout<<"ODD"<<endl;
    }
    return 0;
}
