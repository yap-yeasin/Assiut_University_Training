#include <bits/stdc++.h>
using namespace std;

int main()
{   
    long long n,a;
    cin >>n;
    int arr[n];

	for (int i = 0; i <n; i++){
        cin>>a;
        arr[i] = a;
    }
    for(int j=n-1;0<=j;j--){
        cout<<arr[j];
        if(j>0){
            cout<<" ";
        }
    }
	return 0;
}
