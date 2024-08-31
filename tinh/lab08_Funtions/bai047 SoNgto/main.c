#include <stdio.h>

int kt_so_ngto(int n){
  if(n<2) return 0;
  else if(n>2){
    for(int i=2;i<n;i++){
      if(n%i==0) return 0;
    }
  }
  return 1;
}

int main(void) {
  int n;
  do{
  printf("\nnhap n: ");scanf("%d",&n);
    }while(n<0);
  for(int i=2;i<=n;i++){
  if(kt_so_ngto(i)== 1) printf("\n%d la so ngto",i);
  }
  return 0;
}
