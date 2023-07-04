#include <bits/stdc++.h>
using namespace std;


int main()
{   
    long long n;
    cin >>n;
    long long sum=0;
    int a;
    // vector<long long> arr;

	for (int i = 1; i <=n; i++){
        cin>>a;
        // arr.push_back(a);
        sum+=a;
    }
    // for(int d:arr){
    //     sum+=d;
    // }
    cout<<abs(sum)<<endl;
	return 0;
}
