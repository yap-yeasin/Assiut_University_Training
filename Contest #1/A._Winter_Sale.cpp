#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x,p;
    cin>>x>>p;

    cout<< fixed << setprecision(2);

    float mp = (p*100)/(100-x);
    
    cout<<mp<<endl;

    return 0;
}
