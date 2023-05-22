#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
  long x,y;
  cin >> x >> y;
  if ((y % x) == 0){
    cout<<"Multiples";
  }
  else if((x % y) == 0){
    cout<<"Multiples";
  }
  else{
    cout<<"No Multiples";
  }
 
  return 0;
}
