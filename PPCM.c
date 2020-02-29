#include <stdio.h>

// fonction de calcul du pgcd de 2 nombres
int pgcd(int a, int b)
{
  int r, i = 1;
  while((b*i) <= a)
  {
     i++;
  }
  i--;
  r = a - (b*i);
  if(r == 0)
  {
    return b;
  }
  else
  {
    return pgcd(b,r);
  }
}

int ppcm(int a,int b){
  return ((a*b)/(pgcd(a,b)));
}
int main(){
  int a,b;
  printf("Donnez a: ");
  scanf("%d",&a);
  printf("Donnez b: ");
  scanf("%d",&b);
  printf("Le ppcm de %d et de %d est : %d",a,b,ppcm(a,b));
  return 0;
}