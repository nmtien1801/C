#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    do
    {
        printf("\nnhap chieu dai a:");
        scanf("%f",&a);
        printf("\nnhap chieu rong b:");
        scanf("%f",&b);
        if (a<b)
        {
            printf("\nnhap lai a");

        }
    }while(a<b);

    float HCN=a*b;
    float HV=b*b;
    float HT=3.14*(b/2)*(b/2);

    printf ("\ndien tich hinh can tim 1 la: %0.2f",HCN-HV);
    printf ("\ndien tich hinh can tim 2 la: %0.2f",HV-HT);
    return 0;
}
