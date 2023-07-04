#include<bits/stdc++.h>
using namespace std;

int main(){

    long long x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;

    cout<< fixed << setprecision(9)<<sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)))<<endl;
}

// setprecision(int n)
// Parameters: 
// This method accepts n as a parameter which is the integer argument corresponding to which the floating-point precision is to be set.
// Return Value: This method does not return anything. It only acts as stream manipulators.
  
// C++ standard library's <iomanip> header that is used to set the precision (i.e., the number of decimal places) 
// for floating-point values when using the stream insertion operator (<<) with a std::cout stream.
