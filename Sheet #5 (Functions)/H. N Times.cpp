#include<bits/stdc++.h>
using namespace std;

void times(int n,char ch)
{
    for(int i=0;i<n;i++){
        cout<<ch<<" ";
    }
}


int main()
{
    int t,n;
    cin >>t;
    char ch;

    for(int i=0;i<t;i++){
        cin>>n>>ch;
        times(n,ch);
        cout<<endl;
    }
    return 0;

}
