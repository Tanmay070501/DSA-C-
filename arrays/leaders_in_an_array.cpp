#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
vector<int> getLeaders(int a[], int n){
    vector<int> ans;
    int curr_leader = a[n - 1];
    ans.push_back(curr_leader);
    for(int i = n - 2; i >=0 ; i--){
        if(a[i] > curr_leader){
            curr_leader = a[i];
            ans.push_back(curr_leader);
        }
    }
    //reverse array to print ans in right order
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> ans = getLeaders(a, n);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
