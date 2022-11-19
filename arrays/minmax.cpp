//Given an array A of size N of integers. Your task is to find the sum of minimum and maximum element in the array.
#include <iostream>
using namespace std;
int getMinMaxSum(int a[],int n){
    int min = INT_MAX, max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(min > a[i]){
            min = a[i];
        }
        if(a[i] > max){
            max = a[i];
        }
    }
    return (min + max);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout<<"Sum of min and max is -> "<<getMinMaxSum(a,n);
    return 0;
}