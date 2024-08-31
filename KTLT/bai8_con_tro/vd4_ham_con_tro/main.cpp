#include <stdio.h>
#include <conio.h>
#include <iostream>
#define max 5
void nhap(long &x, long &y);
void bp(long &x, long &y);
void lp(long &x, long &y);
void hv(long &x, long &y);
void hienthi(long a, long b);
int main()
{

    void (*pfa[max])(long &a, long &b);
    long a=1, b=2;
    int chon;
    for(int i=0;i<max;i++)
    {
        printf("\n(1)Nhap (2)Binhphuong (3)Lapphuong (4)Hoanvi \n");
        scanf("%d",&chon);
        switch (chon)
        {
        case 1: pfa[i] = nhap;break;
        case 2: pfa[i] = bp;break;
        case 3: pfa[i] = lp;break;
        case 4: pfa[i] = hv;break;
        default:pfa[i] = 0;
        }
    }
    for(int i=0;i<max;i++)
    {
        pfa[i](a,b);
        hienthi(a,b);
    }
    getch();

    return 0;
}
void hienthi(long x, long y)
{printf("\n a = %ld, b = %ld \n",x,y);}
void bp(long &x, long &y)
{
 x *= x;
 y *= y;
}
void lp(long &x, long &y)
{
 x = x*x*x;
 y = y*y*y;
}
void hv(long &x, long &y)
{ long tam =x;
 x = y;
 y = tam;
}
void nhap(long &x, long &y)
{ printf("\n Nhap gia tri moi cua a: ");
 scanf("%ld",&x);
 printf("\n Nhap gia tri moi cua b: ");
 scanf("%ld",&y);
}
