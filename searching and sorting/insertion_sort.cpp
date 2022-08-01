#include <iostream>
using namespace std;
void insertionSort(int a[], int size){
    int target;
    for(int i = 1; i < size; i++ ){
        target = a[i];
        int j = i-1;
        while(j>=0 && a[j] > target){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = target;
    }
}
int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    insertionSort(arr,n);
    cout<<"Sorted Array: "<<endl;
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*
Time Complexity:
    Best case -> O(n)
    Worst and Average case -> O(n^2)
*/