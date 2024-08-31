#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
using namespace std;


int tong_binh(int a[],int n){
    int tong=0;
    for(int i=0;i<n;i++){
        tong+=(a[i]*a[i]);
    }
    return tong;
}
int main()
{
    FILE *f;
    int a[100];
    int n;
    if(f=fopen("input.txt","r"));

    fscanf(f,"%d",&n);
    for(int i=0;i<n;i++){
        fscanf(f,"%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    tong_binh(a,n);
    fclose(f);

    return 0;
}
