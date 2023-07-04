#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int a , b;
    string s;
    cin >> a >> b;
    cin >> s;

    if (s[a] != '-'){
        cout << "No";
        return 0;
    }
    for (int i = 0 ; i < a + b ; i++){
        if (i == a){
            continue;
        }
        if (!(s[i] -'0' <= 9 && s[i] - '0' >= 0)){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
 
return 0;
}
