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
double emux(float x, float e){
    int i=0;
    double emux=0;
    double tam=luy(x,i)/gt(i);
    while(fabs(tam)>=e){
        emux+=tam;
        i++;
        tam=luy(x,i)/gt(i);
    }
    return emux;
}
int main()
{
    float x,e;
    printf("\nnhap emux: ");scanf("%f",&x);
    do{
        printf("\nnhap eselon: ");scanf("%f",&e);
    }while(e<0);
    printf("\nsinx = %.3lf",emux(x,e));
    return 0;
}
