#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ns;
    long long x ,ans=0;
    cin >>ns>>x;
    long long s_ns = ns.size();

    for(long long i=0;i<s_ns;i++){
        ans = ans * 10;
        ans += ns[i] - '0';
        ans = ans % x;

    }
    if (ans == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

}

/* please cheak parctice pdf */ 
