#include <stdio.h>
#include <stdlib.h>

int main()
{
    //tính n giai thừa
    int n;
    printf("\nnhap n chu so :");scanf("%d",&n);
    int x=1;
    for(int i=2;i<=n;i++)
    {
       x*=i;
    }
    printf("giai thua cua %d la: %d",n,x);
    return 0;
}
