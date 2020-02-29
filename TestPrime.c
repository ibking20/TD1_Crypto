#include <stdio.h>
#include <math.h>

int main(){
  unsigned int a;
  int x=0;
  do{
    printf("Donnez a > 1: ");
    scanf("%d",&a);
  }while(a<2);
  unsigned int t[a+20];
  for(unsigned int i=0;i<a+20;i++){
    t[i] = i;
  }
  
  for(unsigned int i=2;i<a+20;i++){
    for(unsigned int j=i+i;j<a+20;j+=i){
      t[j] = 0;
    }
  }

  for(unsigned int i=2;i<a+20;i++){
    if(t[i] && t[i]==a)
      x=1;
  }
  if(x)
    printf("%d est un nombre premier !!! ",a);
  else
    printf("%d n'est pas un nombre premier !!! ",a);
  return 0;
}