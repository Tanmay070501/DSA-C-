#include <iostream>
using namespace std;
void bubbleSort(int a[], int size){
    bool swapped;
    for(int i = 0; i < size - 1; i++){
        swapped = false;
        for(int j = 0; j < size -1 - i ; j++ ){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
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
    bubbleSort(arr,n);
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