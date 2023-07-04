#include <bits/stdc++.h>
using namespace std;

int main()
{   
    long long n,a;
    cin >>n;
    int arr[n],id;

	for (int i = 0; i <n; i++){
        cin>>a;
        arr[i] = a;
    }
    id = min_element (arr,arr+n) - arr ;
    cout<<arr[id]<<" "<<id+1<<endl;
	return 0;
}
