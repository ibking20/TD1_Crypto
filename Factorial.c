#include <stdio.h>

int Fact(int a){
  if(a == 1 || a == 0)
    return 1;
  else return (a*Fact(a-1));
}
int main(){
  int a;
  printf("Donnez a: ");
  scanf("%d",&a);
  printf("Le Factoriel de %d est %d !!!",a,Fact(a));
  return 0;
}