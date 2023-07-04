#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,t1,t2,temp="",smin="";
    cin >> str;
    int n = str.size();

    vector<string> data;
    
    t1=str.substr(0,1);
    t2=str.substr(1,n-1);

    sort(t1.begin(),t1.end());
    sort(t2.begin(),t2.end());

    temp = t1+t2;
    smin = temp;

    for(int i=2;i<n;i++){
        t1=str.substr(0,i);
        t2=str.substr(i,n-i);

        sort(t1.begin(),t1.end());
        sort(t2.begin(),t2.end());

        temp = t1+t2;
        smin = min(smin, temp);
        // data.push_back(temp);
        temp="";
        // cout<<"n - "<<n<<" i - "<<i<<" n-i - "<<n-i<<endl;
        // cout<<str.substr(0,i)<<" + "<<str.substr(i,n-i)<<endl;

    }
    // for(auto d:data){
    //     if(min>d){
    //         min=d;
    //     }
    // }
    cout<<smin<<endl;
    return 0;

}
