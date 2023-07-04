#include <bits/stdc++.h>
using namespace std;

int main()
{   
    long long n,a;
    cin >>n;
    int arr[n];

	for (int i = 0; i <n; i++){
        cin>>a;
        if (a>0){
            arr[i]=1;
        }
        else if(a<0){
            arr[i]=2;
        }
        else{
            arr[i]=a;
        }
    }
    for(int j=0; j<n;j++){
        cout<<arr[j];
        if(j<n-1){
            cout<<" ";
        }
    }
	return 0;
}
