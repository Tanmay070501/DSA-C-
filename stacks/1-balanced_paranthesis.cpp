#include <iostream>
#include <stack>
using namespace std;

bool checkPair(char v1, char v2){
    return ((v1 == '(' && v2 == ')') || (v1 == '[' && v2 == ']') || (v1 == '{' && v2 == '}'));
}

bool checkBalanced(string expr){
    stack <char> s;
    for (int i = 0; i < expr.length(); i++){
        if(expr[i] == '(' || expr[i] == '[' || expr[i] == '{'){
            s.push(expr[i]);
        }else{
            if(s.empty()){
            //invalid parenthesis encountered
                return false;
            }else if(checkPair(s.top(),expr[i]) == false){
                return false;
            }else{
                s.pop();
            }
        }
    }
    return s.empty();
}

int main(){
    string str;
    cin>>str;
    if(checkBalanced(str)){
        cout<<"Balanced Paranthesis"<<endl;
    }else{
        cout<<"Not a balanced Paranthesis"<<endl;
    }
    return 0;
}