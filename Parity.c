#include <stdio.h>

int Parity(int a){
  if(a%2 == 0)
    return 1;
  else return 0;
}
int main(){
  int a;
  printf("Donnez a: ");
  scanf("%d",&a);
  if(Parity(a))
    printf("a est pair !!! ");
  else printf("a est impair !!! ");
  return 0;
}