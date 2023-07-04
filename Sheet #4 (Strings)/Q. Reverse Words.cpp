#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int s=0;
    while (cin >> str)
    {
        reverse(str.begin(), str.end());
        if (s>0){
            cout << " ";
        }
        s++;
        cout<<str;
    }
    return 0;
}
