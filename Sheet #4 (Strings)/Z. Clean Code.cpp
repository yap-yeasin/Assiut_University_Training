#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    bool cmt = 0; // True -> 1 ,false -> 0
    while (getline(cin, str))
    {
        bool chk = false;
        if (str.size()==0 || str==" "){
            continue;
        }
        for (int i = 0; i < str.size(); i++){
            if (str[i]=='/' && str[i + 1]=='/' && cmt!=1){
                break;
            }
            else if (str[i]=='/' && str[i + 1]=='*'){
                i++;
                cmt = 1;
            }
            else if (str[i]=='*' && str[i + 1]=='/' && cmt==1){
                i++;
                cmt = 0;
            }
            else if (!cmt){

                cout << str[i];
                chk = 1;
            }
        }
        if (chk==1 && cmt!=1){
            cout << endl;
        }
    }
}
