#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float gt(float n){
    float gt=1;
    for(int i=1;i<=n;i++){
        gt*=i;
    }
    return gt;
}
float luy(float a, int b){
    float lt=1;
    for(int i=1;i<=b;i++){
        lt*=a;
    }
    return lt;
}
float cosx(float x, float e){
    int i=0;
    double cos=0;
    double tam=luy(-1,i)*luy(x,2*i)/gt(2*i);
    while(fabs(tam)>=e){
        cos+=tam;
        i++;
        tam=luy(-1,i)*luy(x,2*i)/gt(2*i);
    }
    return cos;
}
int main()
{
    float x,e;
    printf("\nnhap cosx: ");scanf("%f",&x);
    x=x*3.1416/180;
    do{
        printf("\nnhap eselon: ");scanf("%f",&e);
    }while(e<0);
    printf("\ncosx = %.1f",cosx(x,e));
    return 0;
}
