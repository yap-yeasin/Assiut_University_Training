#include<bits/stdc++.h>
using namespace std;

long long fact(int n){
    if(n==0){
        return 1;
    }
    else{
        long long temp =1;
        for(int i=1;i<=n;i++){
            temp= temp*i;
        }
        return temp;
    }
}

int main()
{
    int fn,fc;
    cin >> fn;
    for(int i=1;i<=fn;i++){
        cin>>fc;
        cout<<fact(fc)<<endl;
    }

    return 0;
}
