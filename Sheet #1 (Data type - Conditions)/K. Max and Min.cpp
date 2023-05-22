#include <bits/stdc++.h>
using namespace std;


int main(){
  long x,y,z;
  cin >> x >> y >>z;
  int arr[3];
  arr[0] = x;
  arr[1] = y;
  arr[2] = z;
  cout << arr[min_element(arr, arr+3)-arr] <<" "<< arr[max_element(arr, arr+3)-arr];


  return 0;
}
