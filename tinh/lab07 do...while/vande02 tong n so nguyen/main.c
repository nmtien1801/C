#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,s=0;
    do
    {
        printf("\ndoc cac khoan tien can tinh: "); scanf("%d",&x);
        if(x>=0) s+=x;
    } while(x>=0);
    printf("\ntong so tien can tra la: %d",s);
    return 0;
}
