#include <bits/stdc++.h>
using namespace std;

int main()
{   
    long long n,x,a;
    cin >>n;
    int arr[n];

	for (int i = 0; i <n; i++){
        cin>>a;
        arr[i]=a;
    }

    cin>>x;
    int ans;
    bool an = false;
    for(int j=n-1;j>=0;j--){
        if(arr[j]==x){
            ans = j;
            an = true;
        }
    }
    // cout<<(int)(sizeof(ans)/sizeof(int))<<endl;
    if(an == true){
        cout<<ans<<endl;
    }
    else{
       cout<<-1<<endl; 
    }

	return 0;
}
