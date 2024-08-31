#include <stdio.h>
#include <stdlib.h>

struct PhanSo
{
    int tu;
    int mau;
};
typedef struct PhanSo PHANSO;

void NhapPhanSo (PHANSO &ps)
{
    printf("\nnhap tu so:");
    scanf("%d",&ps.tu);
    printf("\nnhap mau so:");
    scanf("%d",&ps.mau);
}
void XuatPhanSo (PHANSO ps)
{
   printf("%d/%d",ps.tu,ps.mau);
}

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
//PHANSO UCLN = TimUCLN(ps.)
//PHANSO RutGon(PHANSO ps)
//{
//    ps
//}
int main()
{
//    int Tu,mau;
//
//    printf ("\nnhap tu so:");
//    scanf ("%d",&Tu);
//
//    printf ("\nnhap mau so:");
//    scanf ("%d",&mau);
//
//    printf("\nphan so vua nhap la :%d/%d",Tu,mau);
//
//    int UCLN = TimUCLN(Tu,mau);
//    Tu/=UCLN;
//    mau/=UCLN;
//    printf("\nphan so sau khi rut gon la %d/%d",Tu,mau);
    PHANSO ps;
    NhapPhanSo(ps);
    XuatPhanSo(ps);

    return 0;
}



