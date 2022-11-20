#include <iostream>
using namespace std;
void swap(int a[], int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp; 
}

void pushZerosToEnd(int a[], int n) {
    int recent_non_zero_idx = -1;
    for( int i = 0; i < n; i++ ){
        if(a[i] != 0){
            swap(a,i,recent_non_zero_idx + 1);
            recent_non_zero_idx++;
        }
    }
}
void printArray(int a[], int n){
    cout<<"[ ";
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<" ]"<<endl;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout<<"Input: ";
    printArray(a, n);
    pushZerosToEnd(a, n);
    cout<<"Output: ";
    printArray(a, n);
    return 0;
}