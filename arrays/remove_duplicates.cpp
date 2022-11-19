#include <iostream>
#include<vector>
using namespace std;
vector<int> removeDuplicates(vector <int>& a, int n){
    vector<int> temp;
    int recent = 0;
    temp.push_back(a[0]);
    for(int i = 1; i < n; i++){
        if(temp[recent] != a[i] ){
            temp.push_back(a[i]);
            recent++;
        }
    }
    return temp;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    cout<<"Enter sorted duplicate elements: ";
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout<<"Before : ";
    for (int i = 0; i < a.size(); i++){
        cout << a[i] <<" ";
    }
    cout<<endl;
    a = removeDuplicates(a, n);
    cout<<"After: ";
    for (int i = 0; i < a.size(); i++){
        cout << a[i] <<" ";
    }
    return 0;
}