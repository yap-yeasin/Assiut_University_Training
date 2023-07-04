#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,c=0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);

    for (int k = 0; k<n; k++)
    {
        if (arr[0] == arr[k])
        {
            c+=1;
        }
    }

    if(c%2==0){
        cout<<"Unlucky"<<endl;
    }else{
        cout<<"Lucky"<<endl;
    }
}
