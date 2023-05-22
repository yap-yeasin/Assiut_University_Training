#include<bits/stdc++.h>
using namespace std;

int main() {
   char ch;
   int num1,num2;

   cin >>num1 >>ch>>num2;

   if (ch=='>'){
      if (num1>num2){
         cout<<"Right"<<endl;
      }
      else{
        cout<<"Wrong"<<endl; 
      }
   }
   if (ch=='<'){
      if (num1<num2){
         cout<<"Right"<<endl;
      }
      else{
        cout<<"Wrong"<<endl; 
      }
   }

   if (ch=='='){
      if (num1==num2){
         cout<<"Right"<<endl;
      }
      else{
        cout<<"Wrong"<<endl; 
      }
   }

}
