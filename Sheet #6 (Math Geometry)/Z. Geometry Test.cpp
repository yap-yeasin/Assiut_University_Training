#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,s ;
    cin >> r >> s;
    double a = sqrt(2)*s;

    if ((r*2)<=s){
        cout<<"Square"<<endl;
    }
    else if ((r*2)>=a){
        cout<<"Circle"<<endl;
    }
    else{
        cout<<"Complex"<<endl;
    }
}
