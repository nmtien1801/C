#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



int TimUCLN(int x, int y)
{
    while(x!=y)
    {
        if(x>y)
        {
            x=x-y;
        }

        else
        {
            y=y-x;
        }
    }
    return x;
}

int main()
{
    int Tu,mau;

    printf ("\nnhap tu so:");
    scanf ("%d",&Tu);

    printf ("\nnhap mau so:");
    scanf ("%d",&mau);

    printf("\nphan so vua nhap la :%d/%d",Tu,mau);

    int UCLN = TimUCLN(Tu,mau);
    Tu/=UCLN;
    mau/=UCLN;
    printf("\nphan so sau khi rut gon la %d/%d",Tu,mau);


    return 0;
}
