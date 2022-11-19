#include <iostream>
using namespace std;
void getminandmin2(int a[], int n){
    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    
    int min2 = INT_MAX;
    for(int i = 0; i < n ; i++){
        if(a[i]< min2 && a[i] != min){
            min2 = a[i];
        }
    }

    if(min == INT_MAX || min2  == INT_MAX){
        cout<<"Not Applicable";
        return;
    }
    cout<<"smallest and 2nd smallest = "<<min<<" & "<<min2<<endl;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    getminandmin2(a, n);
    return 0;
}