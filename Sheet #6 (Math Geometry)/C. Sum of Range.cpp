#include<bits/stdc++.h>
using namespace std;


int main(){

    long long a,b,sum=0,odd_sum=0,even_sum=0;   
    cin >>a>>b;
    if (a<b){
        for(int i=a;i<=b;i++){
        sum+=i;
        if(i%2 ==0){
            odd_sum+=i;
        }
        else{
            even_sum+=i;
        }
        }
    }
    else{
        for(int i=b;i<=a;i++){
        sum+=i;
        if(i%2 ==0){
            odd_sum+=i;
        }
        else{
            even_sum+=i;
        }
        }
    }
    
    cout<<sum<<endl;
    cout<<odd_sum<<endl;
    cout<<even_sum<<endl;
    
}
