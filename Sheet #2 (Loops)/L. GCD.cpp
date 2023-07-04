#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n1,n2 ;
    cin>>n1>>n2;

    vector< int > v_arr1,v_arr2,v_arr3;
    // vector< int > v_arr2;

    for (int i = 1; i <= n1; i++) {
		if (n1 % i == 0){
            // cout<<"n1 "<<i<<endl;
            v_arr1.push_back(i);
        }
	}

    for (int j = 1; j <= n2; j++) {
		if (n2 % j == 0){
            // cout<<"n2 "<<i<<endl;
            v_arr2.push_back(j);
        }
	}
    for(int i:v_arr1){
        for(int j:v_arr2){
            if(i==j){
                v_arr3.push_back(i);
            }
        }
    }
    sort(v_arr3.begin(), v_arr3.end());
    int s = v_arr3.size();

    cout<<v_arr3[s-1]<<endl;

	// for(int d:v_arr1){
    //     cout<<d<<" ";
    // }
    // cout<<" "<<endl;

    // for(int f:v_arr2){
    //     cout<<f<<" ";
    // }

    // cout<<" "<<endl;

    // for(int f:v_arr3){
    //     cout<<f<<" ";
    // }

    // 2nd solve
    // cout<<"GCD "<<gcd(n1,n2)<<endl;

	return 0;
}
