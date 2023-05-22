#include<bits/stdc++.h>
using namespace std;

int main() {
   int l1,r1,l2,r2,arr[4];
   cin >> l1>>r1>>l2>>r2;

   if (r1<l2){
      cout<<-1<<endl;
   }
   else if(r2<l1){
      cout<<-1<<endl;
   }
   else{
      arr[0]=l1;
      arr[1]=r1;
      arr[2]=l2;
      arr[3]=r2;
      sort(arr,arr+4);
      cout<<arr[1]<<" "<<arr[2]<<endl;
   }

}
