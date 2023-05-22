#include<bits/stdc++.h>
using namespace std;

int main()
{
    long X;
    cin >> X ;

    int year = int(X/365);
    int month = int ((X%365)/30);
    int Day = int ((X%365)%30);
    cout <<year<< " years" << endl;
    cout <<month<< " months" << endl;
    cout <<Day<< " days" << endl;
    return 0;
}
