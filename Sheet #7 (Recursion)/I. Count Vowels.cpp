#include<bits/stdc++.h>
using namespace std;


int vow(string s,int i = 0,int c = 0){

    if(i==s.length()){
        return c;
    }
    char ch = tolower(s[i]);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        c++;
    }

    return vow(s,i+1,c);
}

int main(){
    string s;
    getline(cin,s);

    cout<<vow(s)<<endl;
}
