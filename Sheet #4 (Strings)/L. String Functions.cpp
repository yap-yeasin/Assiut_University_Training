// L. String Functions
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n,q,n1,n2;
    cin >> n>>q;
    string str,str_q;
    cin>>str;
    for(int i=0;i<q;i++){
        cin>> str_q;

        if (str_q == "pop_back"){
            str.pop_back();
        }
        else if (str_q == "front"){
            cout << str.front() << endl;
        }
        else if (str_q == "back")
        {
            cout << str.back() << endl;
        }
        else if (str_q == "sort"){

            cin >> n1 >> n2;
            sort(str.begin() + min(n1, n2) - 1, str.begin() + max(n1, n2));
        }
        else if (str_q == "reverse")
        {
            cin >> n1 >> n2;
            reverse(str.begin() + min(n1, n2) - 1, str.begin() + max(n1, n2));
        }
        else if (str_q == "print")
        {
            int idx;
            cin >> idx;
            cout << str[idx - 1] << endl;
        }
        else if (str_q == "substr")
        {
            cin >> n1 >> n2;
            for (int i = min(n1, n2) - 1; i < max(n1, n2); i++){
                cout << str[i];
            }
            cout << endl;
        }
        else if (str_q == "push_back")
        {
            char x;
            cin >> x;
            str.push_back(x);
        }

    }
  
}
