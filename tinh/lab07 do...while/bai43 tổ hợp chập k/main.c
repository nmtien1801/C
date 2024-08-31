#include<stdio.h>
int gt(int n)
{
    int s=1;
    for (int i=2;i<=n;i++)
        s=s*i;
    return s;
}
void main()
{
    int k,n,x;
    do
    {
        printf("\nnhap n: ");scanf("%d",&n);
        printf("\nnhap k: ");scanf("%d",&k);
    }while(n<0||k<0||k>n);

    x=gt(n)/(gt(k)*gt(n-k));
    printf("\nKet qua: %d\n",x);
    return 0;
}
