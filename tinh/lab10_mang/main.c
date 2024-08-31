#include <stdio.h>
#include <stdlib.h>
#define max 100
int main()
{
  int a[max],n,k;
  do{
    printf("\nnhap n phan tu: ");scanf("%d",&n);
  }while(n<0||n>max);
    do{
    printf("\nnhap k so tren dong: ");scanf("%d",&k);
  }while(k<0);
  for(int i=0;i<n;i++){
    printf("\nnhap vao phan tu thu a[%d]",i);
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++){
    printf("%d  ",a[i]);
    if((i+1)%k==0) printf("\n");
  }

  return 0;
}
