#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n+m]={0};
    for (int i = 0; i < n; i++)
    {
        int ele_num;
        cin >> ele_num;
        if (arr[ele_num] == 0)
        {
            arr[ele_num] = 1;
        }
        else
        {
            arr[ele_num] = arr[ele_num] + 1;
        }
    }
    for (int i = 1; i <= m; i++)
    {
        cout << arr[i] << endl;
    }
}
