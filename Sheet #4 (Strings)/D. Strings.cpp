#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    string x , y;
    cin >> x >> y;
    cout<<x.size()<<" "<<y.size()<<endl;
    cout<<x+y<<endl;
    char t= x[0];
    x[0]=y[0];
    y[0]=t;
    cout<<x<<" "<<y<<endl;
    
    return 0;
}
