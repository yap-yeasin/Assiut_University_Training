#include<bits/stdc++.h>
using namespace std;
 
int main() { 
    long long a,b,c,d;
    cin >>a>>b>>c>>d;
    if(b*log(a)<d*log(c) || b*log(a)==d*log(c))
    { 
        cout<<"NO"; 
    }
    else{ 
        cout<<"YES"; 
    } 
    return 0; 
}
