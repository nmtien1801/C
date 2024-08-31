#include <stdio.h>

int main()
{
    int a[10],*pa,x;
    a[0]=11; a[1]=22; a[2]=33; a[3]=44;
    pa=&a[0];
    printf("\n*pa tro den a[0]: %d",*pa);
//    x=*pa;
//    pa++;
//    x=*pa;
//    printf("\n*pa++ la: %d",x);
//    x=*pa+1;
//    printf("\n*pa+1 la: %d",x);
//    x=*(pa+1);
//    printf("\n*(pa+1) la: %d",x);
//    x=*++pa;
//    printf("\n*++pa la: %d",x);
    x=++*pa;
    printf("\n++*pa la: %d",x);
//    x=*pa++;
//    printf("\n*pa++ la: %d",x);
    return 0;
}
