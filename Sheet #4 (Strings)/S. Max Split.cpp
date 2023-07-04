#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,temp="";
    int cl=0,cr=0,ans=0;
    cin >> str;
    int n=str.size();
    vector<string> data;
    
    for(int i=0; i<n; i++){
        if(str[i]=='L' ){
            cl++;
            temp.push_back(str[i]);
            }
        else if(str[i]=='R'){
            cr++;
            temp.push_back(str[i]);
        }
        if(cr==cl){
            data.push_back(temp);
            temp="";
            cr=0;
            cl=0;
            ans++;
        }
    }

    cout<<ans<<endl;
    for(auto d:data){
        cout<<d<<endl;
    }
    return 0;
}
