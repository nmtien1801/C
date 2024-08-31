#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[30];
    printf("\nnhap chuoi: ");scanf("%s",&a);printf("%s",a);
    fflush(stdin);
    printf("\nnhap chuoi: ");gets(a); puts(a);
    return 0;
}
