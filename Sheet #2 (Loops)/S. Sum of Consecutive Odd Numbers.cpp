#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    cin >>n;
    for (int i=1;i<=n;i++){
        int nu1,nu2,min,max;
        int sum = 0;
		cin >> nu1>>nu2;
        // cout << "nu= "<< nu1<<" "<<nu2<< endl;
		if(nu1>nu2){
            min = nu2;
            max = nu1;
        }
        else if (nu1<nu2){
            min = nu1;
            max = nu2;
        }
        for (int j=min+1;j<max;j++)
		{   

            if(j%2!=0){
                sum+=j;
            }
		}
        cout << sum << endl;
    }
}
