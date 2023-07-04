#include<bits/stdc++.h>
using namespace std;


int main(){

    int x1,x2,x3,x4,y1,y2,y3,y4,arr_x[4],arr_y[4];
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    int max_x,max_y,min_x,min_y;    
    
    arr_x[0]=x1;
    arr_x[1]=x2;
    arr_x[2]=x2;
    arr_x[3]=x4;
    
    arr_y[0]=y1;
    arr_y[1]=y2;
    arr_y[2]=y3;
    arr_y[3]=y4;
    
    min_x =  *min_element(arr_x , arr_x+4);
    max_x =  *max_element(arr_x , arr_x+4);

    // cout<<"min_x "<<min_x<<endl;
    // cout<<"max_x "<<max_x<<endl;

    min_y =  *min_element(arr_y , arr_y+4);
    max_y =  *max_element(arr_y , arr_y+4);

    // cout<<"min_y "<<min_y<<endl;
    // cout<<"max_y "<<max_y<<endl;

    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        if( x >= min_x && x<=max_x ){
            if(y >= min_y && y<=max_y){
                cout<<"YES"<<endl;
            }else{
            cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

 
