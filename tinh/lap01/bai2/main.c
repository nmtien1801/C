#include <stdio.h>
#include <stdlib.h>

int main()
{
    int namHT;
    int namsinh;

    printf("\nnhap nam hien tai :");
    scanf("%d",&namHT);

    printf("\nnhap nam sinh : ");
    scanf("%d",&namsinh);

    printf("\n so tuoi hien tai la :%d",namHT-namsinh);

    return 0;
}
