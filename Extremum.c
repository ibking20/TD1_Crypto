#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int t[20], max, min;
  srand(time(NULL));
  for(int i=0;i<20;i++){
    t[i] = rand()%100;
    printf("t[%d] = %d\n",i+1,t[i]);
  }
  max = t[0];
  min = t[0];
  for(int i=1;i<20;i++){
    if(t[i]>max)
      max = t[i];
    if(t[i]<min)
      min = t[i];
  }
  printf("Le plus petit est %d !!! \n",min);
  printf("Le plus grand est %d !!! \n",max);
  return 0;
}