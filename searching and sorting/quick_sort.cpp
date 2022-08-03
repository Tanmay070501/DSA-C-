#include <iostream>
using namespace std;
int partition(int a[],int low, int high){
    int pivot = a[high];
    int i = low - 1;
    for(int j = low; j < high ; j++){
        if(a[j] < pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    a[high] = a[i + 1];
    a[i+1] = pivot;
    return i + 1;
}
void quickSort(int a[], int low, int high){
    if(low < high){
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
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
    quickSort(arr, 0, n-1);
    cout<<"Sorted Array: "<<endl;
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*
Time Complexity:
    Best case -> O(n*log n)
    Average case -> O(n*log n)
    Worst Case -> O(n^2)
*/