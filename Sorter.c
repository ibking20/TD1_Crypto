#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int t[10], min;
  srand(time(NULL));
  for(int i=0;i<10;i++){
    t[i] = rand()%100;
    printf("t[%d] = %d\n",i+1,t[i]);
  }
  for(int i=0;i<9;i++){
    min = t[i];
    for(int j = i+1; j<10; j++){
      if(t[j]<min){
        min = t[j];
        t[j] = t[i];
        t[i] = min;
      }
    }
    
  }
  printf("\nTableau trie !!! \n\n");
  for(int i=0;i<10;i++){
    printf("t[%d] = %d\n",i+1,t[i]);
  }
  return 0;
}