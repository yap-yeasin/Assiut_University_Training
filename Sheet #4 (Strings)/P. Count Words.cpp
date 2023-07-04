#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string str,t;
    getline(cin,str);
    int c=0,n=str.size();


    for(int i=0;i<n;i++){
        if(( str[i]>='a' && str[i]<='z' ) || ( str[i]>='A' && str[i]<='Z' )){
            if(str[i+1]==' '|| str[i + 1] == '!' || str[i + 1] == '?' || str[i + 1] == '.' || str[i + 1] == ',' ){
                c++;
                }
            else if (i == str.size()-1){
                // copied else section and add if 
                // cout<<"paichi";
                c++;
            }
        }
    }
    cout<< c <<endl;

}
