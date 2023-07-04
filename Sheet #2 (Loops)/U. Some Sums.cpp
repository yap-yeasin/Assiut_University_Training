#include <bits/stdc++.h>
using namespace std;

int check_num(int x){
    int p,s=0;
    while (x > 0)
        {   
            p = x % 10;
            s+=p;
            x /= 10;
        }
    return s;
}

int main()
{
    int n,a,b;
    cin >>n>>a>>b;
    long long sum=0;

    for(int i=1;i<=n;i++){
        if(a<=check_num(i) && check_num(i)<=b){
            sum+=i;
            // cout<<i<<" "<<check_num(i)<<endl;
        }
        // cout<<i<<" "<<check_num(i)<<endl;
    }

    cout<<sum<<endl;
   
   return 0;
}
