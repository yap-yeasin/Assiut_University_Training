#include <bits/stdc++.h>
using namespace std;

long long c_lucky(long long n){
    int c=0;
    long long t= n;
    while (n > 0)
        {
            if (n % 10 == 4 || n % 10 == 7){
                c += 1;
                }
                n /= 10;
        }
        if (c == (int)(log10(t) + 1)){
            return 1;
            // cout << "YES" << endl;
        }
        else{
            return 0;
        // cout << "NO" << endl;
        }
}

int main()
{
	int n1,n2 ;
    cin>>n1>>n2;
    vector<int> vdata;

    for(int i=n1; i<=n2;i++){
        int chk = c_lucky(i);
        if (chk==1){
            vdata.push_back(i);
        }
    }

    if(vdata.size()>0){
        for(int d:vdata){
            cout<<d<<" ";
        }
    }else{
        cout<<-1<<endl;
    }
	return 0;
}
