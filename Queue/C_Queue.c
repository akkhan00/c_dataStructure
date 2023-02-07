#include <stdio.h>
#define MAXSIZE 10
#define bool int
#define true 1
#define false 0


int queue[MAXSIZE]; 
int front = 0; 
int rear = -1;

// Useful function for queue
int peek();
bool isfull();
bool isempty();
// impfunc
int enqueue(int data);
int dequeue();


int main(void){

  enqueue(4);
  enqueue(5);
  enqueue(6);
  dequeue();
  enqueue(7);
  return 0;
}

int dequeue(){
  if(isempty()){
    return 0;
  }
  int data = queue[front];
  printf("Deque %d\n", data);
  front = front +1;
  return data;
}

int enqueue(int data){
  if(isfull())
    return 0;
  printf("Enque %d\n", data);
  rear = rear + 1;
  queue[rear] = data;
  return 1;
}

bool isempty(){
  if(front < 0 || front > rear)
    return true;
  else 
    return false;
}

bool isfull(){
  if(rear == MAXSIZE -1)
    return true;
  else
    return false;
}

int peek(){
  return queue[front];
}
