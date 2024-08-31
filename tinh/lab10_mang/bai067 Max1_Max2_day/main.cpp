#include <iostream>
#include <stdio.h>

void hoanvi(int &a,int &b){
    int c=a;
    a=b;
    b=c;
}
void sapxep(int a[],int n){
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(a[i]>a[j]) hoanvi(a[i],a[j]);
    }
  }
}
int main()
{
    int a[100],n;
    do{
      printf("\nnhap n phan tu: ");scanf("%d",&n);
    }while(n<0);
    for(int i=0;i<n;i++){
        printf("\nnhap vao phan tu a[%d] ",i);scanf("%d",&a[i]);
    }
    printf("\nphan tu vua nhap la: ");
    for(int i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
    sapxep(a,n);

    printf("\nphan tu lon nhat la: %d",a[n-1]);
    printf("\nphan tu lon thu hai la: %d",a[n-2]);
    return 0;
}
