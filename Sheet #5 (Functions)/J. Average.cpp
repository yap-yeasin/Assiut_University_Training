#include<bits/stdc++.h>
using namespace std;

void avg(int n,double arr[]){
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    // Print the average(mean) of the array with n digits after the decimal point.
    // setprecision(n)<<showpoint
    cout<<setprecision(8)<<showpoint<<sum/n<<endl;
}
int main(){
    int n;
    cin>>n;
    double arr[n];

    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    avg(n,arr);
    
}
