#include <bits/stdc++.h>
using namespace std;

int main(){
  double x,y,a;
  cin >> x >> y;

  a = x/y;
  cout << "floor " << x <<" / "<< y <<" = "<< floor(a)<< endl;
  cout << "ceil " << x <<" / "<< y <<" = "<< ceil(a)<< endl;
  cout << "round " << x <<" / "<< y <<" = "<< round(a)<< endl;

  return 0;
}
