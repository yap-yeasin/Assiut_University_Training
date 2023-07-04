#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int q;
    string str;
    cin>>q>>str;
    int n = str.size();

    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    string org = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for(int i=0;i<n;i++){
        if(q==1){
            for(int j=0;j<62;j++){
                if(str[i]==org[j]){
                    str[i]=key[j];
                    // continue;
                    break;
                }
            }
        }
        else if(q==2){
            for(int j=0;j<62;j++){
                if(str[i]==key[j]){
                    str[i]=org[j];
                    // continue;
                    break;
                }
            }
        }
        
    }
    cout<< str <<endl;
}
