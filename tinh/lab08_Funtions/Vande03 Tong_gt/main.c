#include <stdio.h>
int tong_gt(int n){
  int p=1,sum=0;
  for(int i=1;i<=1;i++){
    p*=i;
    sum+=p;
  }
  return sum;
}
int main(void) {
  int n;
  do{
    printf("\nnhap n: ");scanf("%d",&n);
  }while(n<0);
  printf("\ntong giai thua thua la: %d",sum);
  return 0;
}
