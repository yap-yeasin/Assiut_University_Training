#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string str,text="EGYPT";
    cin>>str;
    int n=str.size(),arr[5]={0};

    // All Making uppercase
    for(int i=0;i<n;i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=(str[i]-32);
        }
    }

    // cout<< str <<endl;

    for(int i=0;i<n;i++){
        if(str[i]=='E'){
            arr[0]++;
        }
        else if(str[i]=='G'){
            arr[1]++;
        }
        else if(str[i]=='Y'){
            arr[2]++;
        }
        else if(str[i]=='P'){
            arr[3]++;
        }
        else if(str[i]=='T'){
            arr[4]++;
        }
    }
    cout<<*min_element(arr,arr+5)<<endl;

}
