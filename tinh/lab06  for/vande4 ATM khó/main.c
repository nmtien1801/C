#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int a=0;a<=n/500;a++)
    for(int b=0;b<=n/200;b++)
    for(int c=0;c<=n/100;c++)
    for(int d=0;d<=n/50;d++)
        if(500*a+200*b+100*c+50*d==n)
            printf("\n%d to 50,%d to 100,%d to 200,%d to 500",d,c,b,a);

    return 0;
}
