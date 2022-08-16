#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void prevGreaterEl(int a[],int n){
    vector<int> ans;
    stack<int> st;
    st.push(0);
    ans.push_back(-1);
    for(int i = 1; i < n; i++){
        while(st.empty() != true && a[st.top()] <= a[i]){
            st.pop();
        }
        if(st.empty()){   
            ans.push_back(-1);
        }else{
            ans.push_back(a[st.top()]);
        }
        st.push(i);
    }
    //PRINTING ANSWERS
    cout<<"Answer: ";
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int N;
    cout<<"Enter the size of array:";
    cin>>N;
    int* arr = new int [N];
    cout<<"Enter "<<N<<" elements:";
    for(int i = 0; i < N; i++)
        cin>>arr[i];
    prevGreaterEl(arr, N);
    return 0;
}