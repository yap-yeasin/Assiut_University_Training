#include<bits/stdc++.h>
using namespace std;


int main(){

    long long x1,x2,x3,x4,y1,y2,y3,y4,m1,m2;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

    m1 = (y4 - y3) * (x2 - x1);
    m2 = (y2 - y1) * (x4 - x3);

    if(m1==m2){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

 
