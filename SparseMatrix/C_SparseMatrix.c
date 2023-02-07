#include <stdio.h>


int main(){

  int sparseMatrix[4][5] = {
    {0,0,4,0,3},
    {0,3,4,0,0},
    {0,0,0,0,0},
    {1,2,0,0,0}
  };

  int size = 0;
  for(int i=0; i<4; i++){
    for(int j=0; j<5; j++){
      if(sparseMatrix[i][j] != 0){
        size++;
      }
    }
  }

  int compactMatrix[3][size];
  
  int k = 0;
  for(int i = 0; i<4; i++){
    for(int j=0; j<5; j++){
      if(sparseMatrix[i][j] != 0){
        compactMatrix[0][k] = i; // Store the Row
        compactMatrix[1][k] = j; // Store the Column
        compactMatrix[2][k] = sparseMatrix[i][j]; // Store the Value
        k++;
      }
    }
  }

  // now Print the new CompactMatrix
  for (int i = 0; i<3; i++){
    for(int j=0; j<size; j++){
      switch(i){
        case 0:
          printf("%d ", compactMatrix[i][j]);
          break;
        case 1:
          printf("%d ", compactMatrix[i][j]);
          break;
        case 2:
          printf("%d ", compactMatrix[i][j]);
          break;
      }
    }
    printf("\n");
  }

  return 0;
}
