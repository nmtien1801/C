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
double sinx(float x, float e){
    int i=0;
    double sinx=0;
    double tam=luy(-1,i)*luy(x,2*i+1)/gt(2*i+1);
    while(fabs(tam)>=e){
        sinx+=tam;
        i++;
        tam=luy(-1,i)*luy(x,2*i+1)/gt(2*i+1);
    }
    return sinx;
}
int main()
{
    float x,e;
    printf("\nnhap sinx: ");scanf("%f",&x);
    x=x*3.1416/180;
    do{
        printf("\nnhap eselon: ");scanf("%f",&e);
    }while(e<0);
    printf("\nsinx = %.3lf",sinx(x,e));
    return 0;
}
