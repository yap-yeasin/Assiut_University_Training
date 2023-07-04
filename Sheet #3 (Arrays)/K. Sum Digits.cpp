#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,sum=0;
    cin >> n;
    string a,t;
    cin>>a;

    for (int i = 0; i < n; i++){
        sum+=(a[i]-'0'); // str number to int number
    }
    cout<<sum<<endl;
}
