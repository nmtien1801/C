#include <stdio.h>

void tim_max_min(int n){
  int max = n%10;
  int min =n%10;
  while(n!=0){
    int a= n%10;
    n/=10;
    if(max<a) max=a;
    if(min>a) min=a;
  }  printf("\nmax là :%d",max);
  printf("\nmin là :%d",min);
}
int main(void) {
  int n;
  do{
    printf("\nnhap n: "); scanf("%d",&n);
  }while(n<0);
  tim_max_min(n);
  return 0;
}
