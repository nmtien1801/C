#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float e,i=1;
    float p=0;
    printf("\nnhap e: ");scanf("%f",&e);
    while(1.0/pow(4,i)>=e)
    {

        p+=1.0/pow(4,i);
        i++;
    }
    printf("%f",p-1.0/3);
    return 0;
}
