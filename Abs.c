#include <stdio.h>

int Abs(int a){
  if(a < 0)
    return -a;
  else return a;
}
int main(){
  int a;
  printf("Donnez a: ");
  scanf("%d",&a);
  printf("|%d| = %d",a,Abs(a));
  return 0;
}