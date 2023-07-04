#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    cin>>str;
    int n=str.size();

    for(int i=0;i<n;i++){
        if(str[i]=='E'&&str[i+1]=='G'&&str[i+2]=='Y'&&str[i+3]=='P'&&str[i+4]=='T'){
            str[i]=' ';
            str.erase(i+1,4);
        }
    }
    cout<< str <<endl;
}
