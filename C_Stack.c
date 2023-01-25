#include <stdio.h>

#define true 1
#define false 0
typedef int bool;

#define MAXSIZE 10
int top = -1;
int stack[MAXSIZE] = {1, 2,3, 4, 5, 6};

// This function is just for the status of the stack
int peek();
bool isFull();
bool isEmpty();

// function for push data
void push(int data);
// function for pop data
int pop();

int main(void){
  top += 6;

  // printf("top Data Element: %d\n", peek());
  // printf("IsFull: %d\n", isFull());
  // printf("IsEmpty: %d\n", isEmpty());
  //

  push(10);
  push(20);
  push(30);
  push(40);
  push(50);
  printf("%d top Element\n", peek());
  printf("pop value: %d\n", pop());
  // push(60);
  printf("%d top Element\n", peek());

  return 0;
}

int pop(){
  if(!isEmpty()){
    int data = stack[top];
    top = top -1; // in linked list we will be free the memory 
    return data;
  }else{
    printf("You Stack is Empty\n");
    return -1;
  }
}

void push(int data){
  if(!isFull()){
    top = top + 1;
    stack[top] = data;
  }else{
    printf("Stack is Full! \n");
  }
}

int peek(){
  return stack[top];
}

bool isEmpty(){
  if(top == -1){
    return true;
  }else{
    return false;
  }
}

bool isFull(){
  if(top == MAXSIZE){
    return true;
  }else{
    return false;
  }
}
