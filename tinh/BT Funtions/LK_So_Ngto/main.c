#include <stdio.h>
#include <stdlib.h>
int KT_So_Ngto(int n){
    if(n<2) return 0;
    else if(n>2){
            for(int i=2;i<=n/2;i++){
                if(n%i==0) {
                    return 0;
                }
            }
        }
    return 1;
}
int main()
{
    int n;
    printf("\nnhap n: ");scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(KT_So_Ngto(i)==1)printf("%d ",i);
    }
    return 0;
}
