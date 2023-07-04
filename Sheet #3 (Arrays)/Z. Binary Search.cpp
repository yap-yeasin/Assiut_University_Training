#include<bits/stdc++.h>
using namespace std;

int bs(int arr[],int target,int num){
    int lo=0;
    int hi= num-1;
    while (lo <= hi){
            int mid = ceil((lo + hi) / 2);  // if 2.5 return 3 
 
            if (arr[mid] == target){
                return 1;
            }
            else if (target > arr[mid]){
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }
    return -1;
}

int main(){
 
    int n,td;
    cin >> n >> td;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    while (td--)
    {
        int chk_t;
        cin >> chk_t;

        int chk_f = bs(arr,chk_t,n);

        if( chk_f == -1){
            cout<<"not found"<<endl;
        }
        else{
            cout<<"found"<<endl;

        }
    }
}
