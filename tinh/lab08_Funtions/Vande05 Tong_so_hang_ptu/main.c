#include <stdio.h>
int tong_chu_so(int n){
  int tong=0;
  while(n!=0){
    int cs= n%10;
    n/=10;
    tong+=cs;
  }
  return tong;
}
int main(void) {
  int n;
  do{
    printf("\nnhap so: ");scanf("%d",&n);
  }while(n<0);
  printf("\ntong cac chu so là: %d",tong_chu_so(n));
  return 0;
}
