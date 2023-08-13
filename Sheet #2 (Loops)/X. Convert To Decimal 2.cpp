#include<bits/stdc++.h>
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
                ones++; // 1's count 
                dec += 1*pow(2, p); // 1's to Decimal Binary(11) >> Decimal(3)
                p++;
            }
            num /= 2;
        }
        cout << dec << endl;
    }
}
