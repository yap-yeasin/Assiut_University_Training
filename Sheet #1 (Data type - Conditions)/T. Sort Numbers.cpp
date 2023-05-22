#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x,y,z,arr[3];
    cin >> x >> y >>z ;
    arr[0] = x;
    arr[1] = y;
    arr[2] = z;

    sort(arr,arr+3);

    for (int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    return 0;
}
