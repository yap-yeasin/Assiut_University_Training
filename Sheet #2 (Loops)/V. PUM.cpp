#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n,range;
    cin >>n;
    range= 4*n;

    for(int i=1;i<=range;i++){
        if (i%4==0){
            cout<<"PUM"<<endl;
        }
        else{
            cout<<i<<" ";
        }
        
    }
}
