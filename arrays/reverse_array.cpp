#include <iostream>
using namespace std;
void reverse(int a[],int n){
    int low = 0, high = n - 1;
    while(high > low){
        int temp = a[high];
        a[high] = a[low];
        a[low] = temp;
        low++;
        high--;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout<<"Before reverse: ";
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    reverse(a,n);

    cout<<"After reverse: ";
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}