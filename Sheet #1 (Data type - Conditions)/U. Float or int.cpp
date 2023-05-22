#include<bits/stdc++.h>
using namespace std;

int main()
{
    string snum;
    cin >>snum;

    int c = 0,a,flt_c=0;
    int int_num = stoi (snum);
    double d_snum = stod (snum);
    double dec_part = d_snum - int_num ;


    for(int i=0 ;i<size(snum);i++){
        // cout<<snum[i]<<endl;
        if ((int)snum[i] == 46 ){
            a = i;
        }
    }


    for(int i= a+1;i<size(snum);i++){
        flt_c +=1;
        // cout<<snum[i]<<endl;
        // cout<<typeid(snum[i]).name()<<endl;
        if (snum[i] == '0'){
            c+=1;
        }
    }

    // cout<<"0 count  "<<c<<endl;
    // cout<<"After .  "<<flt_c<<endl;

    if (flt_c == c){
        // cout<<"int"<<endl;
        cout<<"int "<< int_num <<endl;
    }
    else{
        cout<<"float "<< int_num <<" "<<dec_part<<endl;
    }

    return 0;
}
