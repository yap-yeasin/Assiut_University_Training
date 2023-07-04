#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    cin >>n;
    for (int i=1;i<=n;i++){
        string num; 
		cin >> num;
		int size = num.size(); 
		for (int j=size-1;j>= 0;j--)
		{ 
			cout << num[j] << " ";
		}
		cout << endl;
    }
}
