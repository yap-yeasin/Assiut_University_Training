#include<bits/stdc++.h>
using namespace std;


void swap(int a,int b)
{
    if(a>b){
        a = a+b; //7+5=13
        b = a-b; //13-5=7
        a = a-b; //13-7=5
        cout<<a<<" "<<b<<endl;
    }
    else{
        a = a+b; //7+5=13
        b = a-b; //13-5=7
        a = a-b; //13-7=5
        cout<<a<<" "<<b<<endl;
    }
}


int main()
{
    int a,b;
    cin >>a>>b;
    swap(a,b);

    return 0;

}
