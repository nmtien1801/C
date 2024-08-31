#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\ntu dien co bao nhieu tu: ");scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\nnhap tu tieng anh: ");
        scanf("%s",a[i].name);
        printf("\nnhap nghia tieng viet: ");
        scanf("%s",a[i].meaning);
    }


     int i,j;
    char mid[100];
    strcpy(mid ,a[(l+r)/2].name);
    i= l; j= r;
    do{
        while(strcmp(a[i].name,mid) < 0) i++;
        while(strcmp(a[j].name,mid) > 0) j++;
        if(i<=j) {
            hoanVi(a[i],a[j]);
            i++;
            j--;
        }
    }while(i < j);
    if(l<j) quickSort(a,l,j);
    if(i<r) quickSort(a,i,r);
    return(0);
}
