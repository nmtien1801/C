#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char x[10];
    int na=0,pa=0,khac=0;
    printf("\nnhap x: ");
    fflush(stdin);
    gets(x);
    int length=strlen(x);
    for(int i=0;i<length;i++)
    {
        if(x[i]>='a'&&x[i]<='z')
        {
            if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='u'||x[i]=='o')
            {
                na++;
            }
            else pa++;
        }
        else khac++;
    }
    printf("\nnguyen am: %d",na);
    printf("\nphu am: %d",pa);
    printf("\nki tu khac: %d",khac);
    return 0;
}
