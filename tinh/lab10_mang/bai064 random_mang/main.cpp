#include <stdio.h>
#include <iostream>
void swap(int &a,int &b){
    int tam=a;
    a=b;
    b=tam;
}
int main()
{
    int a[100];
    for(int i=0;i<100;i++){
        a[i]=rand();
    }
    for(int i=0;i<99;i++){
        for(int j=i+1;j<100;j++){
            if(a[i]>a[j]) swap(a[i],a[j]);
        }
    }
    for(int i=0;i<100;i++){
        printf("%d  ",a[i]);
    }
    return 0;
}
