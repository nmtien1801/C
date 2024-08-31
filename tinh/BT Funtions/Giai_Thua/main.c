#include <stdio.h>
#include <stdlib.h>
int Giai_Thua(int n);
int main()
{
    int n;
    do{
    printf("\nnhap n: ");scanf("%d",&n);
    }while(n<0);
    printf("\ngiai thua cua %d = %d",n,Giai_Thua(n));
    return 0;
}
int Giai_Thua(int n)
{
    int gt=1;
    for(int i=1;i<=n;i++)
    {
        gt*=i;
    }
    return gt;
}
