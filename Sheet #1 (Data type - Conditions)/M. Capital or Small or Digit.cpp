#include<bits/stdc++.h>
using namespace std;

int main()
{
    char X;
    cin >> X;
    int a = int(X);
    if(a>=65 && a<=90){
        cout<<"ALPHA"<<"\n"<<"IS CAPITAL"<< endl;
        }
    else if (a>=97 && a<=122) {
        cout<<"ALPHA"<<"\n"<<"IS SMALL"<< endl;
        } 
    else if (a>=47 && a<=57) {
        cout<<"IS DIGIT"<< endl;
        }
    return 0;
}
