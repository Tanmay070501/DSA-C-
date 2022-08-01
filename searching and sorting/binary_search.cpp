#include <iostream>
using namespace std;
int binarySearch(int a[], int left, int right, int val){
    if(left <= right){
        int mid = (left + right)/2;
        if(a[mid] == val)   return mid;
        else if(a[mid] > val) return binarySearch(a,left,mid-1,val);
        else return binarySearch(a,mid+1, right,val);
    }else return -1;
}
int main(){
    int n, val;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " array elements in sorted manner (ascending): ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the value to be searched : ";
    cin >> val;
    int x = binarySearch(arr,0, n-1, val);
    if (x == -1){
        cout << val << " not found in the array";
    }
    else{
        cout << val << " found at index " << x;
    }
    return 0;
}