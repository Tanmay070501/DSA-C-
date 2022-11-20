#include <iostream>
using namespace std;
void maxProfit(int price[], int n){
    int profit = 0;
    for(int i = 1; i < n; i++){
        if(price[i-1] < price[i]){
            profit+=(price[i] - price[i-1]);
        }
    }
    cout<<"Maximum possible profit is : "<<profit<<endl;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    maxProfit(a,n);
    return 0;
}