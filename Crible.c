#include <stdio.h>
#include <math.h>

int main(){
  int a;
  printf("Donnez a: ");
  scanf("%d",&a);
  int t[a];
  for(int i=0;i<a;i++){
    t[i] = i;
  }
  
  for(int i=2;i<a;i++){
    for(int j=i+i;j<a;j+=i){
      t[j] = 0;
    }
  }

  for(int i=2;i<a;i++){
    if(t[i])
      printf("%d ",i);
  }
  
  return 0;
}