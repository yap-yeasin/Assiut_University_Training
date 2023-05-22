#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans,num1,num2,num3;
    char ch1,ch2;
    cin >>num1>>ch1>>num2>>ch2>>num3;

    if (ch1 =='+'){
        ans = num1+num2;
    }
    else if (ch1 =='-'){
        ans = num1-num2;
    }
    else if (ch1 =='*'){
        ans = num1*num2;
    }
    else if (ch1 =='/'){
        ans = num1/num2;
    }


    if(ans==num3){
        cout <<"Yes"<<endl;
    }
    else{
        cout <<ans<<endl;
    }
    
    return 0;
}
