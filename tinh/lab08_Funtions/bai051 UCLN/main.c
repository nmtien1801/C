#include <stdio.h>
int UCLN(int a,int b)
{
   while(a!=b){
     if(a<b)b-=a;
     else a-=b;
} return a;
}
int BCNN(int a,int b){
   return (a*b)/UCLN(a,b);
}
int main(void) {
  int a,b;
  do{
    printf("\nnhap a: ");scanf("%d",&a);
printf("\nnhap b: ");scanf("%d",&b);
  }while(a<0||b<0);
printf("\nUCLN cua 2 so là: %d",UCLN(a,b));

  printf("\nBCNN cua 2 so la: %d",BCNN(a,b));

  return 0;
}
