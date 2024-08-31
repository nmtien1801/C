#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a,b;
    char c;
    printf("\nnhap so toan tu:");
    scanf("%c",&c);
    printf("\nnhap so thu nhat:");
    scanf("%d",&a);
    printf("\nnhap so thu hai:");
    scanf("%d",&b);
    switch(c)
    {
        case '+':
            printf("%d+%d=%d",a,b,a+b);
            break;
        case '-':
            printf("%d-%d=%d",a,b,a-b);
            break;
        case '*':
            printf("%d*%d=%d",a,b,a*b);
            break;
        case '/':

            if(b==0){printf("\nmau phai khac 0");break;}
            printf("%d/%d=%f",a,b,(float)a/b);
            break;
        default:
            printf("\nkhong hop le");
            break;
    }
    return 0;
}
