#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,tich=1;
    do
    {
        printf("\nnhap n: ");scanf("%d",&n);
    }while(n<0);
    for(int i=1;i<=n;i++)
    {
        if(n%2==0)
        {
            if(i%2==0) tich*=i;
        }
        else
        {
            if(i%2!=0) tich*=i;
        }
    }
    printf("\ntich= %d",tich);
    return 0;
}
