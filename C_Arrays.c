#include <stdio.h>

void traverse(int arr[], int arrlen);
void insertion(int arr[], int arrlen, int value, int index);
void deletion(int arr[], int index, int arrlen);
void searchByIndex(int arr[], int index);
void searchByValue(int arr[], int value, int arrlen);
void update(int arr[], int value, int index);

int main(void){
  int array[10] = {1,2,3,4,5};
  insertion(array, 5, 10, 2);
  deletion(array, 1, 6);
  update(array, 20, 1);
  traverse(array, 5);
  searchByIndex(array, 3);
  searchByValue(array, 3, 5);
  return 0;
}

void update(int arr[], int value, int index){
  arr[index] = value;
}

void searchByValue(int arr[], int value, int arrlen){
  for(int i = 0; i<arrlen; i++){
    if(value == arr[i]){
      printf("Found: %d\n", value);
      return;
    }
  }
  printf("Not Found! : %d\n",value);
}

void searchByIndex(int arr[], int index){
  printf("found: %d\n", arr[index]);
}

void deletion(int arr[], int index, int arrlen){
  for(int i = index; i<arrlen; i++){
    arr[i] = arr[i+1];
  }
}

void insertion(int arr[], int arrlen, int value, int index){
  int i;
  for(i = arrlen; i>= index; i--){
    arr[i+1] = arr[i];
  }
  arr[i+1] = value;
}

void traverse(int arr[], int arrlen){
  for(int i = 0; i<arrlen; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}
