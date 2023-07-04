#include<bits/stdc++.h>
using namespace std;


int main(){

    double x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    double c_x1,c_y1,c_x2,c_y2,r1_dis,r2_dis,dis_c,r;    

    c_x1 = (x1+x2) /2;
    c_y1 = (y1+y2) /2;
    c_x2 = (x3+x4) /2;
    c_y2 = (y3+y4) /2;

    r1_dis = sqrt(pow((x1-x2),2)+pow((y1-y2),2))/2;
    r2_dis = sqrt(pow((x3-x4),2)+pow((y3-y4),2))/2;

    dis_c = sqrt(pow(c_x1-c_x2,2)+pow(c_y1-c_y2,2));

    r = r1_dis + r2_dis;

    if(dis_c <= r){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

 
