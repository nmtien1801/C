#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
  int c=*a;
  *a=*b;
  *b=c;
}
int main()
{
  int a,b;
  printf("\nnhap a va b: ");
  scanf("%d%d",&a,&b);
  swap(&a,&b);
  printf("a=%d,b=%d",a,b);
  return 0;
}
