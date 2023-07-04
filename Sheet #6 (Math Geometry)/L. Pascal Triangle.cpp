#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;

    vector<vector<int>> pas(n, vector<int> (n,1));

    // int pas[n][n]={1};
    // // /* void* memset( void* str, int ch, size_t n); */
    // memset(pas, 1, sizeof(pas));
    // memset(pas,1,n*n*sizeof(pas));

    for(int i=0;i<n;i++){
        for(int j=1;j<i;j++){
            pas[i][j]=(int) pas[i-1][j-1] + (int) pas[i-1][j];
            // cout<<pas[i-1][j-1]<<endl;
            // cout<<pas[i-1][j]<<endl;
            // cout<<pas[i][j]<<endl;
            // cout<<endl;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<pas[i][j]<<" ";
        }
        cout<<endl;
    }

}

/* 2nd Solution */ 


// int main()
// {
//     int num;
//     cin >> num;
//     int p_val;

//     for (int i = 0; i < num; i++){
//         p_val = 1;
//         for (int j = 0; j <= i; j++){
//             cout << p_val << " ";
//             p_val = p_val * (i - j) / (j + 1);
//         }
//         cout << endl;
//     }
// }
