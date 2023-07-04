#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int a,b;
    cin >> a >> b;
    int arr1[a],arr2[b];
    if(a<b){
        cout<<"NO"<<endl;
        return 0;
    }

    for (int i = 0; i < a; i++){
        cin>>arr1[i];
    }
    for (int i = 0; i < b; i++){
        cin>>arr2[i];
    }
    int c=0;
    
    // 7 4
    // 1 8 4 7 5 2 7
    // 4 5 7 2

    // 1 8 4 7 5 2 7
    // 4 4 4 5 5 7 7 c=3
    // b!=c
    // NO

    for (int i = 0; i < a; i++){
        if (arr2[c] == arr1[i]){
            c++;
        }
    }
    if (c == b){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
