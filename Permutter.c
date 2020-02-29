#include <stdio.h>

int main(){
  int a,b,c;
  printf("Donnez a: ");
  scanf("%d",&a);
  printf("Donnez b: ");
  scanf("%d",&b);
  c = a;
  a = b;
  b = c;
  printf("a = %d et b = %d",a,b);
  return 0;
}