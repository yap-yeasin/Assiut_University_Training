#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    getline(cin,s);
    int l = s.size();
    for(int i=0;i<l;i++){
        if(s[i]==44){
            s[i]=' ';
            continue;;
        }
        if(s[i]>96){
            s[i]= s[i]-32;
        }
        else{
            s[i]=s[i]+32;
        }
    }
    cout<<s<<endl;
    
    return 0;
}
