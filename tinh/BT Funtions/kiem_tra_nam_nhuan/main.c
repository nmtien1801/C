#include <stdio.h>
#include <stdlib.h>
int KT(int nam);
int main()
{
    int nam;
    printf("\nnhap nam: ");
    scanf("%d",&nam);
    if(KT(nam)==1)printf("\nnam %d la nam nhuan",nam);
    else printf("\nnam %d khong la nam nhuan",nam);
    return 0;
}
int KT(int nam)
{
    if(nam%4==0&&nam%100!=0||nam%400==0)return 1;
    else return 0;
}
