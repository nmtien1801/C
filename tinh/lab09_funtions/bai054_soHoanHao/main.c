#include <stdio.h>
#include <stdlib.h>

int hoan_hao(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0)sum+=i;
    }
    if(sum/2==n)return 1;
    return 0;
}
int main()
{
    int n;
    printf("\nnhap n: ");scanf("%d",&n);
    if(hoan_hao(n)==1){
        for(int i=1;i<=n;i++){
            if(n%i==0)printf("%d",i);
        }
    }
    return 0;
}
