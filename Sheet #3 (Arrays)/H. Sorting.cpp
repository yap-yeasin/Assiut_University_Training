#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int j = 0; j<n; j++){
        for (int k = 0; k<n; k++)
        {
            if (arr[j] < arr[k])
            {
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if(i<n-1){
            cout<<" ";
        }
    }
}
