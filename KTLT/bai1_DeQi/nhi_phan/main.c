#include <stdio.h>
#include <stdlib.h>
void xuatnhiphan(int n);
int main()
{
    int n;
    do{
       printf("\nnhap n: ");scanf("%d",&n);
    }while(n<0);
    xuatnhiphan(n);

    return 0;
}
void xuatnhiphan(int n){
    if(n>=0){
        if(n/2>0)xuatnhiphan(n/2);
        printf("%d",n%2);
    }
}
