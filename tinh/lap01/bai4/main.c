#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("\nnhap so a :");
    scanf("%d",&a);
    printf ("\nnhap so b:");
    scanf("%d",&b);

    printf("\ntong la:%d",a+b);
    printf("\nhieu la:%d",a-b);
    printf("\ntich la :%d",a*b);
    printf("\nthuong la:%f",(float)a/b);

    return 0;
}
