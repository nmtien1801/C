#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float gt(int n);

int main()
{
    double x;
    printf("\nnhap x: ");scanf("%lf",&x);

     int i=1;
    double emu=1,e=0.00001, tam=(pow(x,i))/gt(i);

    while(tam>=e) {
        emu+=tam;
        i++;
        tam=(pow(x,i))/gt(i);
    }
    printf("%lf",emu);

    return 0;
}
float gt(int n) {
    int gt=1;
    for(int i=1;i<=n;i++){
        gt*=i;
    }
    return (float)gt;
}
