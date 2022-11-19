//Given an array arr[] of size N, check if it is sorted in non-decreasing order or not. 
#include <iostream>
using namespace std;
bool isSorted(int a[], int n){
    for(int i = 1; i < n; i++){
        if(a[i - 1] > a[i])
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    bool res = isSorted(a,n);
    if(res){
        cout<<"SORTED!";
    }else{
        cout<<"NOT SORTED!";
    }
    return 0;
}
/*
        TIME COMPLEXITY -> O(n)
*/