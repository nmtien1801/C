#include <stdio.h>
#include <stdlib.h>

int main()
{
    int canNang;
    int ChieuCao;

    printf("\nnhap can nang :");
    scanf("%d",&canNang);

    printf("\nnhap chieu cao (cm) :");
    scanf("%d",&ChieuCao);

    float DoiCC =(float)ChieuCao/100;
    printf ("\ntuc la : %f (m)",DoiCC);

    float BMI =(float)canNang/(DoiCC*DoiCC);
    printf("\nchi so BMI la :%f",BMI);

    return 0;
}
