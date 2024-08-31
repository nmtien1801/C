#include <stdio.h>
#include <stdlib.h>

float max(float a,float b){
    if(a>b)return a;
    else return b;
}
float min(float a,float b){
    if(a>b)return b;
    else return a;
}
int main()
{
    int n;
    float a,b;
    do{
        printf("\nnhap n: ");scanf("%d",&n);
    }while(n<2);
    printf("\nnhap vao so thu nhat: ");scanf("%f",&a);
    float Max=a;
    float Min=a;
    for(int i=2;i<=n;i++){
        printf("\nnhap vao so thu %d: ",i);scanf("%f",&b);
        Max=max(Max,b);
        Min=min(Min,b);
    }
    printf("\nmax = %f",Max);
    printf("\nmin = %f",Min);
    return 0;
}
