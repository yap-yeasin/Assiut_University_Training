// M. Replace MinMax

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,e,temp,ans_m,ans_n;
    cin >> n;
    int arr[n];

    
    for (int i = 0; i < n; i++){
        cin>>e;
        arr[i]=e;
    }

    ans_m = max_element (arr,arr+n)-arr; // index return 
    ans_n = min_element (arr,arr+n)-arr;

    // ans_m = *max_element (arr,arr+n); // memory return 
    // ans_n = *min_element (arr,arr+n);

    t=arr[ans_m];
    arr[ans_m]=arr[ans_n];
    arr[ans_n]=t;
  
    for (int d=0; d<n;d++) {
    cout << arr[d]<< " "; 
    }

}
