#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,d,c,nu1,nu2;
    int ch,ans,num1,num2;
    cin >> a;

    for(int i= 0;i<=size(a);i++){
        if (a[i]=='+'){
            ch=i;
        }
        else if(a[i]=='-'){
            ch=i;
        }
        else if(a[i]=='*'){
            ch=i; 
        }
        else if (a[i]=='/'){
            ch=i;
        }
    }
    for (int j=0;j<ch;j++){
        c=a[j];
        nu1.append(c);
    }
    for (int k=ch+1;k<=size(a);k++){
        d=a[k];
        nu2.append(d);
    }    

    num1 = stoi(nu1);  // string to int
    num2 = stoi(nu2);
    if (a[ch]=='+'){
        ans = num1+num2;
    }
    else if (a[ch]=='-'){
        ans = num1-num2;
    }
    else if (a[ch]=='*'){
        ans = num1*num2;
    }
    else if (a[ch]=='/'){
        ans = num1/num2;
    }

    cout <<ans<<endl;

    return 0;
}
