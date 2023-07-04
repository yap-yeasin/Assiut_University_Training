#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >>arr[i];
        }
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int flag = 1; 
                for(int k=i;k<j;k++){
                    if(arr[k]>arr[k+1]){
                        flag = 0;
                        // using flag repeat sub array gula ekbar count kora jay.
                    }
                }
                if(flag==1){
                    c++;
                }
            }
            
        }
        cout<<c<<endl;
    }
    
}
