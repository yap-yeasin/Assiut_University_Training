#include<bits/stdc++.h>
using namespace std;

bool odd(int num)
{
    if (num % 2 == 1){
        return true;
    }
    return false;
}

bool chk_d2b(long long n)
{   

    // cout<<n<<endl;
    vector<long long> bin_data;
    vector<long long> t_arr;

    long long i = 0;
    while (n > 0) {
        bin_data.push_back(n % 2);
        n = n / 2;
        i++;
    }

    // for(auto d:bin_data){
    //     cout<<d;
    // }
    // cout<<endl;
    
    long long sn=bin_data.size();

    // cout<<sn<<endl;

    // ****reverse order****
    for (long long j = sn-1; j >= 0; j--){
        t_arr.push_back(bin_data[j]);
    }

    // for(auto m:t_arr){
    //     cout<<m;
    // }
    // cout<<endl;

    if(bin_data==t_arr ){
        return true;
    }
    else{
        return false;
    }


}


int main()
{
    long long n;
    cin >>n;
    chk_d2b(n);
    if(chk_d2b(n) && odd(n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;

}
