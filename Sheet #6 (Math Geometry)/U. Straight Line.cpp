#include<bits/stdc++.h>
using namespace std;


int main(){

    long long x1,x2,x3,y1,y2,y3,m1,m2;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    m1= (y2-y1)*(x3-x2);
    m2= (y3-y2)*(x2-x1);

    if(m1==m2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

 
