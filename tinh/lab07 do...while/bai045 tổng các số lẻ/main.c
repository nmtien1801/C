#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s=0;
    do{
    printf("\nnhap n: ");scanf("%d",&n);
    }while(n<2);
    for(int i=1;i<=n;i++)
    if(i%2!=0){
        s+=i;
    }
    printf("\ntong cac so le khong vuot qua n la: %d",s);
    return 0;
}
