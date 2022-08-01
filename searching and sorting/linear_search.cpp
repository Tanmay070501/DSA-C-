#include <iostream>
using namespace std;
int linearSearch(int a[], int size, int val)
{
    bool flag = false;
    int i = 0;
    for (i = 0; i < size; i++){
        if (a[i] == val){
            flag = true;
            break;
        }
    }
    if(flag) return i;
    else return -1;
}
int main()
{
    int n, val;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the value to be searched : ";
    cin >> val;
    int x = linearSearch(arr, n, val);
    if (x == -1){
        cout << val << " not found in the array";
    }
    else{
        cout << val << " found at index " << x;
    }
    return 0;
}