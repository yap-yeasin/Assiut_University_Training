// Time
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    while (true)
    {
        cin >> n1>>n2;
        long long sum=0;

        if(n1<=0 || n2<=0){
            break;
        }
        else{
            int min = 0, max = 0;
            if(n1>=n2){
                max = n1;
                min = n2;
            }
            else{
                max = n2;
                min = n1;
            }
            for(int i= min ;i<=max;i++){
                    cout<<i<<" ";
                    sum+=i;
                }       
        }
        cout<<"sum ="<<sum<<endl;
    }
}
