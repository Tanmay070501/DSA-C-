#include <iostream>
using namespace std;
void getMinimum(int a[],int n){
    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(min > a[i]){
            min  =  a[i];
        }
    }
    cout<<"Minimum element is -> "<<min<<endl;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    getMinimum(a,n);
    return 0;
}
