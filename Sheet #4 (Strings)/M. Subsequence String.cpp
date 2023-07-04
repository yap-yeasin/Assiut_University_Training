#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str,chk="hello",t;
    cin >> str;
    int c = 0;

    for (int i = 0; i < str.size(); i++){
        if (str[i] == chk [c]){
            t.push_back(str[i]);
            c++;
        }
    }
    if (c==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
