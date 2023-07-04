#include<bits/stdc++.h>
using namespace std;

void max_min(int size,int arr[])
{
    long long min=LONG_LONG_MAX,max=LONG_LONG_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<min<<" "<< max<<endl;
}


int main()
{
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    max_min(n,arr);

    return 0;

}
