#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r1,c1,r2,c2 ;
    cin >> r1 >> c1;
    int mat1[r1][c1]; 

    for(int i=0;i< r1;i++){
        for(int j=0;j<c1;j++){
            cin>>mat1[i][j];
        }
    }

    cin >> r2 >> c2;
    int  mat2[r2][c2]; 

    for(int i=0;i< r2;i++){
        for(int j=0;j<c2;j++){
            cin>>mat2[i][j];
        }
    }
    

    //  /* Multi Answer */

    // int  mat[r1][c2]={0};
    long long  mat[r1][c2];
    // double  mat[r1][c2]={0};

    for(int i=0;i< r1;i++){
        for(int j=0;j<c2;j++){
            mat[i][j]=0;
        }
    }


    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            for(int k = 0; k < r2; k++){   
                mat[i][j] += (mat1[i][k] * mat2[k][j]);
                // cout<<"mat1[i][k]   "<<mat1[i][k]<<"   ";
                // cout<<"mat2[k][j]   "<< mat2[k][j]<<"    ";
                // cout<<"mat[i][j]   "<< mat[i][j]<<endl;
            }
        }
    }


    for(int i=0;i< r1;i++){
        for(int j=0;j<c2;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}
