#include <stdio.h>
#include <math.h>

void Solver(int a, int b, int c){
  int d;
  float x1,x2;
  d = b*b - 4*a*c;
  if(d<0)
    printf("Aucune solution");
  else{
    if(d==0)
      printf("Resultat double x0= %f", (float) (-b/(2*a)));
    else{
      x1 = (-b-sqrt(d))/(2*a);
      x2 = (-b+sqrt(d))/(2*a);
      printf("x1 = %f et x2 = %f",x1,x2);
    }
  }
}
int main(){
  int a,b,c;
  printf("Donnez a: ");
  scanf("%d",&a);
  printf("Donnez b: ");
  scanf("%d",&b);
  printf("Donnez c: ");
  scanf("%d",&c);
  printf("La solution de (%d)x2 + (%d)x + (%d) = 0 est : ",a,b,c);
  Solver(a,b,c);
  return 0;
}