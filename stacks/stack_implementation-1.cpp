#include <iostream>
using namespace std;

//stack structure
struct Stack{
    int top;
    int maxSize;
    int *array;
};

struct Stack* create(int size ){
    struct Stack* stack = new struct Stack;
    stack->maxSize = size;
    stack->top = -1;
    stack->array = new int [size];
    return stack;
}

bool isEmpty(struct Stack* stack){
    return stack->top == -1;
}

bool isFull(struct Stack* stack){
    if(stack->top == stack->maxSize - 1){
        cout<<"Stack is full!!!"<<endl;
    }
    return (stack->top == stack->maxSize - 1);
}

void push(struct Stack* stack, int item){
    if(isFull(stack)) return;
    stack->top++;
    stack->array[stack->top] = item;  
}

int pop(struct Stack* stack){
    if(isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];  
}

int peek(struct Stack* stack){
    if(isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}

int size(struct Stack* stack){
    return (stack->top + 1);
}

//not a function that comes in property of stacks
void print(struct Stack* stack){
    if(stack->top == -1){
        cout<<"Stack is empty"<<endl;
        return;
    }
    cout<<"Printing stack:"<<endl;
    for(int i = 0; i <= stack->top; i++){
        cout<<stack->array[i]<<endl;
    }
}
int main(){
    struct Stack* s1 = create(8);
    push(s1, 2);
    push(s1, 3);
    push(s1, 5);
    push(s1, 7);
    push(s1, 9);
    print(s1);
    cout<<"Popping "<<pop(s1)<<endl;
    cout<<"Popping "<<pop(s1)<<endl;
    print(s1);
    cout<<"Top item: "<<peek(s1)<<endl;
    cout<<"Size: "<<size(s1)<<endl;
    return 0;
}