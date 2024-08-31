#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("\nnhap 2 so duong :");scanf("%d%d",&x,&y);
    while(x!=y)
    {
        if(x>y) x-=y;
        if(y>x) y-=x;
    } printf("\nUCLN la :%d",x);
    return 0;
}
