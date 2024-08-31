#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c;
    printf("\nnhap a :");
    scanf("%f",&a);
    printf("\nnhap a :");
    scanf("%f",&b);
    printf("\nnhap a :");
    scanf("%f",&c);

    float ChuVi=a+b+c;
    printf("\nchu vi tam giac la :%f",ChuVi);
    float P =ChuVi/2;
    float S =sqrt(P*(P-a)*(P-b)*(P-c));
    printf("\ndien tich tam giac la:%f",S);

    return 0;
}
