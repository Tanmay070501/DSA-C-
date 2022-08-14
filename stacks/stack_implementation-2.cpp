#include <iostream>
using namespace std;

class Stack{
    int maxSize;
    int top;
    int *a;
    
    public:
        Stack(int size){
            this->maxSize = size;
            this->top = -1;
            this->a = new int[maxSize];
        }

        bool push(int item){
            if(top >= (maxSize - 1)){
                cout<<"Stack Overflow"<<endl;
                return false;
            }else{
                top++;
                a[top] = item;
                cout<<item<<" pushed into stack"<<endl;
                return true;
            }
        }

        int pop(){
            if(top < 0){
                cout<<"Stack underflow"<<endl;
                return 0;
            }else{
                int x = a[top];
                top--;
                return x;
            }
        }

        int peek(){
            if(top < 0){
                cout<<"Stack is empty"<<endl;
                return 0;
            }else{
                return a[top];
            }
        }

        bool isEmpty(){
            return (top < 0);
        }

        bool isFull(){
            return (top == maxSize - 1);
        }

        void display(){
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
                return;
            }
            for(int i = top; i >= 0 ; i--){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    class Stack s(5);
    cout << s.isEmpty() << endl;
    cout << s.isFull() << endl;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);
    s.push(30);
    cout << s.isEmpty() << endl;
    cout << s.isFull() << endl;
    cout << s.pop() << " element popped from the stack\n";
    s.display();
    return 0;
}