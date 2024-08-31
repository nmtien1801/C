#include <stdio.h>
#include <random>
#include <stdlib.h>
#include <ctime>

void nhap(int a[], int &n){
    printf("nhap n: ");scanf("%d",&n);
    srand(time(NULL));
    for(int i=0; i<n;i++){
        a[i]=1+rand()%(100);
    }
}
void xuat(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void interchangeSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
int main()
{
    int a[100],n;
    nhap(a,n);
    interchangeSort(a,n);
    xuat(a,n);
    return 0;
}
