#include <bits/stdc++.h>
using namespace std;

int main()
{   
    long long n,a;
    cin >>n;
    int arr[n];

	for (int i = 0; i <n; i++){
        cin>>a;
        if (a<=10){
            cout<<"A["<<i<<"] = " << a<<endl;
        }
    }
	return 0;
}
