#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
	string str;
    cin >> n >>str;

    char t = str[0];
    int count = 1;

    for (int i = 1; i < n; i++){
        if (str[i] != t){
            count++;
            t = str[i];
        }
    }
    cout<<count<<endl;
}
