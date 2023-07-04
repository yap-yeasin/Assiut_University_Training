#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<=n;i++){
        if (i%2==0){
            cout<<i<<endl;
            c+=1;
        }
    }
    if (c==0){
       cout<<-1<<endl;  
    }
    return 0;
}
