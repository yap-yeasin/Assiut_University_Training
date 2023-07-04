#include <bits/stdc++.h>
using namespace std;
 
int main()
{   
    long int n,a;
    cin >>n;
    vector<long int>arr_d1;
    vector<long int>arr_d2;
 
    for(int i=0;i<n;i++){
        cin>>a;
        arr_d1.push_back(a);
    }
    for(int i=0;i<n;i++){
        cin>>a;
        arr_d2.push_back(a);
    }
    sort(arr_d1.begin(), arr_d1.end());
    sort(arr_d2.begin(), arr_d2.end());

    if(arr_d1==arr_d2){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    return 0;
}
