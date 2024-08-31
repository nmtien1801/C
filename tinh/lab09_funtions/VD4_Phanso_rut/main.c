#include <stdio.h>
#include <stdlib.h>

int UCLN(int a,int b){
    while(a!=b){
        if(a<0||b<0){
            a*=-1;
        }
        if(a>b)a-=b;
        if(b>a)b-=a;
    }
    return a;
}
int main()
{
    int tu,mau;
    printf("\nnhap tu so: ");scanf("%d",&tu);
    do{
        printf("\nnhap mau so: ");scanf("%d",&mau);
    }while(mau==0);
    int UC=UCLN(tu,mau);
    printf("%d",UC);
    tu=tu/UC;
    mau=mau/UC;
    printf("\nphan so sau khi rut gon la: %d / %d",tu,mau);
    return 0;
}
