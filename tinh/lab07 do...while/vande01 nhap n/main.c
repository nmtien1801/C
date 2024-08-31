#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do
    {
        printf("\nnhap gia tri n: "); scanf("%d",&n);
        if(n<=0 || n>=10) printf("\nnhap lai n ");
    }while(n<=0 || n>=10);
    printf("\ngia tri n la: %d",n);
    return 0;
}
