#include <stdio.h>
#include <string.h>

int main(){
    int a[10]={2,3,5,7,11,13},*p,i=0;
    p=&a[4];
    printf("\n%x",&a[3]);
    printf("\n%x",&a[2]);

    printf("\n%d",*(--p));  //7,7
    printf("\n%d",p-a);     //3
    printf("\n%x",(a+a[i]));//5
    printf("\n%x",p+i);     //7
    return 0;
}
