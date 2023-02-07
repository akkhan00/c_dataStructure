#include <stdio.h>


void printQueue();
int peek();
void enqueue(int data);
int dequeue();

#define MAX_SIZE 10
int queue[MAX_SIZE];
int front = 0;
int rear = 0;

int main(void){

  printQueue();
  enqueue(1);
  enqueue(2);
  enqueue(3);
  printf("before dequeue\n");
  printQueue();
  int d = dequeue();
  printf("Remove value: %d\n", d);
  printf("After remove\n");
  printQueue();
  return 0;
}

int dequeue(){
  if(rear == 0 && front == 0)
    return 0;
  else if( front == rear ){
    rear = 0;
    front = 0;
    return 0;
  }
  int data = queue[front];
  front += 1;
  return data;
}

void enqueue(int data){
  if(rear == MAX_SIZE -1){
    return; 
  }
  queue[rear] = data;
  rear += 1;
}

void printQueue(){
  for(int i = front; i<rear; i++){
    printf("[%d] | {%d}\n", i, queue[i]);
  }
}
