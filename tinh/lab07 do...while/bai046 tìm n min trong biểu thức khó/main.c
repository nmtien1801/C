#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1,j=0;
    float A,tong =0;
    do
    {
        printf("\nnhap A: ");scanf("%f",&A);
    }while(A<=0||A>=2);

    for(int i=1;;i++)
    {
        tong+=1.0/i;
        j=i;
        if(tong>A) break;
    }

    printf("\nn nho nhat: %d",j);

    return 0;
}
