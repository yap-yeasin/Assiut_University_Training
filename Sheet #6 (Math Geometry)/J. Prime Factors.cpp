#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n ;
    cin >>n;

    long long d=2;
    vector<long long >arr(n,0);
    int c=0;
    while(n>1)
    {
        if(n%d==0 ){
            arr[d]=arr[d]+1;
            n/=d;
        }
        else{
            d++;
        }
        
    }

    // cout<<"D "<<d<<endl;
    for(int i=0;i<=d;i++){
        if(arr[i]!=0){
            cout<<"("<<i<<"^"<<arr[i]<<")";
            if(i!=d){
                cout<<"*";
            }
        }
    }
}
