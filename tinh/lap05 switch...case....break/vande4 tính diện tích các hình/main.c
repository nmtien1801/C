#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    float a,b,c,s;
    do{
        printf("\nnhap so :");scanf("%d",&x);
        if(x<1||x>4) printf("\nnhap tu 1 -> 4");
    }while(x<1||x>4);

    if(x==1)
    {
       printf("\nnhap 3 canh tam giac :"); scanf("%d%d%d",&a,&b,&c);
       float p=(a+b+c)/2;
       s=sqrt(p*(p-a)*(p-b)*(p-c));
    }
    if(x==2)
    {
        printf("\nnhap 2 canh hinh chu nhat :"); scanf("%d%d",&a,&b);
        s=a*b;
    }
    float r;
    if(x==3)
    {
        printf("\nnhap vao ban kinh hinh tron :"); scanf("%f",&r);
        s=3.14*r*r;
    }
    else
    {
        return;
    }
    return 0;
}
