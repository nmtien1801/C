#include <stdio.h>
#include <stdlib.h>
float Max(float a,float b,float c);
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    printf("\ngia tri lon nhat la: %f",Max(a,b,c));
    return 0;
}
float Max(float a,float b,float c)
{
    float max;
    max = a>b?a:b;
    max= c>max?c:max;
    return max;
}
