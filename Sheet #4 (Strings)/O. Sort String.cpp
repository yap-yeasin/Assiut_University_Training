#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,arr[26] = {0};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        // Small letter start from 97
        // a > 97-97=0  Position add 1 to this 
        // b > 98-97=1  Position
        // c > 99-97=3  Position
        arr[(int)ch - 97] = arr[(int)ch - 97] + 1;
    }

    for (int i = 0; i <= 25; i++)
    {
        // cout << arr[i]<<endl;
        while (arr[i] != 0) 
        {
            cout << (char)(i + 97);
            // arr[i]--;
            arr[i]=arr[i]-1;
        }
    }
   
}
