#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ,c;
    cin >> n;
    int temp = -1;
    for(int i =0 ; i<n;i++){
        cin>>c;
        if (temp>c){
            continue;
        }
        else{
            temp = c;
        } 
    }
    cout<<temp<<endl;
    return 0;
}
