#include <stdio.h>
#include <stdlib.h>
#include <iostream>
void hoanvi(int &a,int &b){
    int c=a;
    a=b;
    b=c;
}
void tang(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) hoanvi(a[i],a[j]);
        }
    }
}
void giam(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]) hoanvi(a[i],a[j]);
        }
    }
}

int main()
{
    int a[10],n,x;
    do{
      printf("\nnhap n phan tu: ");scanf("%d",&n);
    }while(n<0);
    for(int i=0;i<n;i++){
        printf("\nnhap vao phan tu a[%d] ",i);scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        tang(a,n);
        printf("%d  ",a[i]);
    }

    printf("\nnhap x can them: ");scanf("%d",&x);
    if(n==100) printf("\nda day");
    else{
        a[n]=x;
        n++;
    }
    printf("\nptu sau khi them la: ");
    for(int i=0;i<n;i++){
        tang(a,n);
        printf("%d  ",a[i]);
    }
    return 0;
}
