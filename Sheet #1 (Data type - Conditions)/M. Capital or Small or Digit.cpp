#include<bits/stdc++.h>
using namespace std;

int main()
{
    char X;
    cin >> X;
    int a = int(X);
    if(a>='A' && a<='Z'){
        cout<<"ALPHA"<<"\n"<<"IS CAPITAL"<< endl;
        }
    else if (a>='a' && a<='z') {
        cout<<"ALPHA"<<"\n"<<"IS SMALL"<< endl;
        } 
    else if (a>='0' && a<='9') {
        cout<<"IS DIGIT"<< endl;
        }
    return 0;
}
