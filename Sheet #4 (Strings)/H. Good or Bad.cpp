#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int n=s.size(),r = n-3+1;
        int flag = 0;

        for(int j=0; j<r; j++){
            // string s1 = s.substr(j, 3);
            string s1;
            s1.push_back(s[j]);
            s1.push_back(s[j+1]);
            s1.push_back(s[j+2]);
            
            // cout<<s1<<endl;

            if (s1=="010"|| s1 =="101"){
                cout<<"Good"<<endl;
                flag = 1;
                break;
            }
        }
        if(flag==0){
            cout<<"Bad"<<endl;
        }
    }
    
}

/* string substr (size_t pos, size_t len) const;
Parameters:
    pos   :  Position of the first character to be copied.
    len   :  Length of the sub-string.
    size_t:  It is an unsigned integral type.*/
