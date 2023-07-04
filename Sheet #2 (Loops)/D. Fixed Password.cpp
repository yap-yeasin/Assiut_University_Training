#include<bits/stdc++.h>
using namespace std;

int main()
{
    int pass = 1999,i;
    int c=0;
    while (c==0)
    {
        cin>>i;
        if(i==pass){
            cout<<"Correct"<<endl;
            c+=1;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }
    
    return 0;
}
