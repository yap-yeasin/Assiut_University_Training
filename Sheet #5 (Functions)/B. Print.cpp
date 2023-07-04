#include<bits/stdc++.h>
using namespace std;


void nums(int num)
{

    for (int i = 1; i <= num; i++){
		cout << i;
        if (i != num)
            cout << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    nums(n);
}
