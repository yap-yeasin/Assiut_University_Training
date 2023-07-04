#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, line;
    cin >> line;

    for (int i = 1; i <= line; i++){
        cin >> num;
        int ones = 0,dec = 0,p = 0;

        while (num != 0){
            if (num % 2 == 1){
                ones++;
                dec += 1*pow(2, p);
                p++;
            }
            num /= 2;
        }
        cout << dec << endl;
    }
}
