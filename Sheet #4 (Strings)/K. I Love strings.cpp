#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s1,s2;
        cin>>s1>>s2;

        int n1 = s1.size();
        int n2 = s2.size();
        int s_min = min(n1,n2);

        for(int i=0;i<s_min;i++){
            cout<<s1[i]<<s2[i];
        }
            if (n1>n2){
                for(int i=s_min ; i<n1 ; i++){
                    cout<<s1[i];
                }
            }
            else{
                for(int i=s_min ; i<n2 ; i++){
                    cout<<s2[i];
                }
            }
        cout<<endl;
    }
    
}
