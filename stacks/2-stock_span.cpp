#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void calculateSpan(int price[],int n){
    vector<int> span;
    stack<int> st;
    st.push(0);
    span.push_back(1);
    for(int i = 1; i < n; i++){
        while(st.empty() != true && price[st.top()] <= price[i]){
            st.pop();
        }
        int spanValue;
        if(st.empty()){   
            spanValue = i + 1;
        }else{
            spanValue = i - st.top();
        }
        span.push_back(spanValue);
        st.push(i);
    }
    //PRINTING ANSWERS
    cout<<"Span of stocks are: ";
    for(int i = 0; i < span.size(); i++){
        cout<<span[i]<<" ";
    }
}

int main(){
    int N;
    cout<<"Enter the size of array:";
    cin>>N;
    int* price = new int [N];
    cout<<"Enter "<<N<<" prices:";
    for(int i = 0; i < N; i++)
        cin>>price[i];
    calculateSpan(price, N);
    return 0;
}