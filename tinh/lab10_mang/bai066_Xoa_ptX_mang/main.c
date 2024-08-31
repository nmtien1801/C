#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,x;
    do{
        printf("\nnhap n phan tu: ");scanf("%d",&n);
    }while(n<0);
    for(int i=0;i<n;i++){
        printf("\nnhap vao phan tu thu a[%d]",i);scanf("%d",&a[i]);
    }
    printf("\nmang moi nhap la: ");
    for(int i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
    printf("\nnhap vao x can xoa: ");scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(a[i]==x){
            for(int j=i+1;j<n;j++){
                a[j-1]=a[j];
            }
            n--;
            i--;
        }
    }
    printf("\nphan tu sau khi xoa la: ");
    for(int i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
    return 0;
}
