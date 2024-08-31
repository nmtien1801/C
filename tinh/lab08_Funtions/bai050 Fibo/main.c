#include <stdio.h>
int fibo(int n){
  int t1=1,t2=1,f=1;
  for(int i=3;i<=n;i++){
    f=t1+t2;
    t1=t2;
    t2=f;
  }
  return f;
}
int main(void) {
int n;
  do{
    printf("\nnhap n: ");scanf("%d",&n);
  }while(n<1);
  printf("\nket qua la: %d",fibo(n));
  return 0;
}
