#include <stdio.h>
#include <stdlib.h>
int Tim_UCLN1(int a,int b){
    while(a!=b){
        if(a>b)a-=b;
        else if(a<b)b-=a;
    }
    return a;
}
int Tim_UCLN2(int a,int b){
    while(a*b!=0){
        if(a>b)a%=b;
        else if(a<b)b%=a;
    }
    return a+b;
}
int main()
{
    int a,b;
    printf("\nnhap a,b: ");scanf("%d%d",&a,&b);

    printf("\nUCLN = %d",Tim_UCLN1(a,b));
    printf("\nUCLN = %d",Tim_UCLN2(a,b));
    return 0;
}
