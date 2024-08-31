#include <stdio.h>
#include <stdlib.h>
int KT_So_Ngto(int a);
int main()
{
   int a;
   printf("\nnhap a: ");scanf("%d",&a);
   if(KT_So_Ngto(a)==1) printf("\nso %d la so nguyen to",a);
   else printf("\nso %d khong la so nguyen to",a);
    return 0;
}
int KT_So_Ngto(int a)
{
    if(a<2)return 0;
    else
    {
        if(a>2)
        {
            for(int i=2;i<a;i++) if(a%i==0)return 0;
        }
    }
    return 1;
}
