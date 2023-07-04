#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n,td;
    cin >> n >> td;
    long long arr[n] , sum_arr[n];
    for (int i = 1 ; i <= n ; i++){
        cin >> arr[i];
        sum_arr[i] = arr[i] + sum_arr[i - 1];
    }
    while (td--){
        int l , r;
        cin >> l >> r;
        long long sum = sum_arr[r] - sum_arr[l-1];
        cout << sum << endl;
    }
}
