#include <stdio.h>

int Tynnier(int a, int b, int c){
  if(a>=b && c>=b)
    return b;
  else if(b>=a && c>=a)
    return a;
  else if(a>=c && b>=c)
    return c;
}
int main(){
  int a,b,c;
  printf("Donnez a: ");
  scanf("%d",&a);
  printf("Donnez b: ");
  scanf("%d",&b);
  printf("Donnez c: ");
  scanf("%d",&c);
  printf("Le plus petit est %d !!!",Tynnier(a,b,c));
  return 0;
}