#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,even,odd,pos,neg;
    cin >> n;
    even= 0;
    odd= 0;
    pos= 0;
    neg = 0;
    
    vector <int> vec_data(n);

    for(int i=0;i<n;i++){
        cin>>p;
        vec_data[i]=p;
    }
    for(int i:vec_data){
        if(i%2==0){
            even+=1;
        }
        if (i%2!=0){
            odd+=1;
        }
        if (i>0){
            pos+=1;
        }
        if (i<0){
            neg+=1;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;

    return 0;
}
