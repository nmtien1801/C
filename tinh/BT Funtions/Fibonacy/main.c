#include <stdio.h>
#include <stdlib.h>
int Fibo(int n);
int main()
{
    int n,fn;
    do{
    printf("\nnhap n: ");scanf("%d",&n);
    }while(n<0);

    printf("\nKQ: %d",Fibo(n));
    return 0;
}
int Fibo(int n)
{
    int f0=1,f1=1,fn;
    if(n==0||n==1) return fn=1;
    for(int i=2;i<=n;i++)
    {
        fn=f1+f0;
        f0=f1;
        f1=fn;
    }
    return fn;
}
