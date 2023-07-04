#include <bits/stdc++.h>
using namespace std;
 
int main()
{   
    long long int n,a;
    cin >>n;
    int count=0;
    vector<long long int>arr_d;
 
    for(int i=0;i<n;i++){
        cin>>a;
        arr_d.push_back(a);
    }
    bool chk = true;
    int i = 0; 

    while (true)
    {
        if(arr_d[i]%2==0){
            count+=1;
            arr_d[i]=arr_d[i]/2;
            // cout<<i<<" "<<arr_d[i]<<endl;
        }
        else{
            break;
        }
        if(i<n-1){
            i++;
        }
        else{
            i=((i+1)/n)-1;
        }
    }

    cout<<(count)/n<<endl;
    return 0;
}
