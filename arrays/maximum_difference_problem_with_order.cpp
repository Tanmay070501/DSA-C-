//Maximum Difference problem is to find the maximum of arr[j] - arr[i] where j>i.
#include <iostream>
using namespace std;
void findMaxDiffOrder(int a[], int n){
    int res = a[1] - a[0];
    int min_so_far = a[0];
    for(int j = 1; j < n; j++){
        res = max(res, a[j] - min_so_far);
        min_so_far = min(min_so_far, a[j]);
    }
    cout<<"Ans: "<<res;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    findMaxDiffOrder(a, n);
    return 0;
}
