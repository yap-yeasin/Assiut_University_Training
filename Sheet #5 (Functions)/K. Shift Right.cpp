#include<bits/stdc++.h>
using namespace std;


int main()
{   
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t = x%n;
    while(t--){
        int i=n-1;
        int j=i-1;
        int temp=arr[n-1];
        while(j>=0 && i>=0){
            arr[i]=arr[j];
            j--;
            i--;
        }
        arr[i]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}


// 5 21
// 1 2 3 4 5

// n=5
// i= n-1 = 4
// j= i-1 = 3

// Here, variable i is initialized to 4 which is the last index of the given array. 
// So, variable i will work from index 4 to 1, and variable j is initialized to (i-1) 
// which means at first it will be holding the value 3. 
// After this, the element at index 3 will get swapped with the element at index 4.
// Then, i and j both will get decremented by 1 till it becomes equal to zero.
// Following this, every time each element will get shifted to the right. Lastly,
// the value of the temporary element will be placed at the first place of the array as 
// the current index of i will be zero.
