#include<bits/stdc++.h>
using namespace std;

long long int ch2int(char chr)
{
    if (chr >= '0' && chr <= '9'){
        return chr - '0';
    }
    else{
        return chr - 'A' + 10;
        // G >>> G(71)-A(65)+10 = 16
    }
}
char int2ch(long long int n)
{
    if (n >= 0 && n <= 9){
        return n + '0';
    }
    else{
        return n + 'A' - 10; 
        // 16 >>> 16+A(65)-10 = 71 >> G
    }
}

long long b2d(string n,int x){
    long long int  p=0,ans=0;
    for(long long int i=n.length()-1;i>=0;i--){
        ans+=ch2int(n[i])*pow(x,p);
        p++;
    }
    return ans;

}

string d2b(long long int n,int x){
    string ans = "";
    while (n>0){
        long long int remainder = n%x;
        ans = int2ch(remainder)+ans;
        n=n/x;
    }
    return ans;

}

int main()
{
    int t,x;
    string n;

	cin>>t>>n>>x;

	if(t==1){
		cout<<b2d(n,x)<<endl;
	}
	else{
        long long int a = stoi(n);
		cout<<string(d2b(a,x))<<endl;
	}
	
}

/*

test
2 36406 30 >>>> 1ADG
1 1ADG 30  >>>> 36406

*/
