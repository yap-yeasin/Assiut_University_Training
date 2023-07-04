#include<bits/stdc++.h>
using namespace std;

string chk(int a,int b,int c){
    if(a+b>c && b+c>a && c+a>b){
        return "Valid";
    }
    return "Invalid";
}


int main(){

    int a,b,c;
    cin>>a>>b>>c;

    cout<<chk(a,b,c)<<endl;
    if (chk(a,b,c)=="Valid"){
        double s = (a+b+c)/2;
        cout<<fixed << setprecision(6)<< sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
    }
}

 
