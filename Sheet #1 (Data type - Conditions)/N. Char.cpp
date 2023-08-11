#include<bits/stdc++.h>
using namespace std;

int main()
{
    char X;
    cin >> X;
    int a = int(X);
    if(a>='A' && a<='Z'){
        // cout<<"ALPHA"<<"\n"<<"IS CAPITAL"<< endl;
        a=a+32;
        cout <<char(a)<<endl;

        }
    else if (a>='a' && a<='z') {
        // cout<<"ALPHA"<<"\n"<<"IS SMALL"<< endl;
        a=a-32;
        cout <<char(a)<<endl;
        } 
    return 0;
}
