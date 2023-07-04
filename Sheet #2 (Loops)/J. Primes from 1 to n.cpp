#include <bits/stdc++.h>
using namespace std;

bool c_prime(int n)
{
	if (n == 1 || n == 0){
        return false;
    }

	// checking (2 to n-1) is divisible or not 
	for (int i = 2; i < n; i++) {
		if (n % i == 0){
            return false;
        }
	}
	return true;
}

int main()
{
	int n ;
    cin>>n;
	for (int i = 1; i <= n; i++) {
		if (c_prime(i)){
            cout << i << " ";
        }
	}

	return 0;
}
