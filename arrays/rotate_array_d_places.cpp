#include <iostream>
using namespace std;
void reverse(int a[], int low, int high){
    while(low < high){
        int temp = a[low];
        a[low] = a[high];
        a[high] = temp;
        low++;
        high--;
    }
}
void rotateArray(int a[], int n, int d){
    if(d > n) d = d%n;
    reverse(a, 0, d - 1);
    reverse(a, d, n - 1);
    reverse(a, 0, n - 1);
}
int main()
{
    int n,d;
    cout<<"Enter size of array: ";
    cin >> n;
    cout<<"Enter d = ";
    cin>>d;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout<<"Before Rotation: [";
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"]"<<endl;
    rotateArray(a,n,d);
    cout<<"After Rotation: [";
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"]"<<endl;
    return 0;
}