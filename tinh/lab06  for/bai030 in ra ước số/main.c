#include <stdio.h>
#include <stdlib.h>

int main()
{
                    //tìm ước của n
    int n;
    printf("\nnhap vao so nguyen n: ");scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0) printf("%d",i);
    }
    return 0;
}
