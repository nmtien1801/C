#include <iostream>
#include <stdio.h>
#include<time.h>
#include <stdlib.h>
using namespace std;

void input(int Q[], int &n);
void output(int Q[], int n);
long sum_rec(int Q[], int n);
int max_rec(int Q[], int n);
int min_rec(int Q[], int n);
long sum(int Q[], int n);

int main()
{
    int Q[1000],n;
    input(Q,n);
    output(Q,n);
    printf("\nphan tu lon nhat trong mang la: %d",max_rec(Q,n));
    printf("\nphan tu nho nhat trong mang la: %d",min_rec(Q,n));

    printf("\n\ntong cac phan tu trong mang la: %ld",sum(Q,n));

    clock_t start= clock();
    sum(Q,n);
    clock_t end = clock();
    cout<<"\nTime = "<<(double)(end-start)/100<<"(s)"<<endl;
    printf("\ntong cac phan tu trong mang(DQ) la: %ld",sum_rec(Q,n));
    clock_t start_dq= clock();
    sum_rec(Q,n);
    clock_t end_dq = clock();
    cout<<"\nTime = "<<(double)(end_dq-start_dq)/100<<"(s)"<<endl;

    return 0;
}
void input(int Q[], int &n){
    srand(time(NULL));
    for(int j=1;j<=10;j++){
        n=rand()%(10-1+1)+1;
    }
    srand(time(NULL));
    for (int i = 0; i < n; i++){
        Q[i] =rand()%(100-1+1)+1;
    }
}
void output(int Q[], int n){
    printf("\nphan tu vua nhap la: ");
    for(int i=0;i<n;i++){
        printf("%d ",Q[i]);
    }
}
long sum_rec(int Q[], int n){
    if(n==0)return 0;
    return sum_rec(Q,n-1)+Q[n-1];
}
int max_rec(int Q[], int n){
    if(n==1)return Q[0];
    return max_rec(Q,n-1)>Q[n-1]? max_rec(Q,n-1): Q[n-1];
}
int min_rec(int Q[], int n){
    if(n==1)return Q[0];
    return min_rec(Q,n-1)<Q[n-1]? min_rec(Q,n-1): Q[n-1];
}
long sum(int Q[], int n){
    int t=0;
    for(int i=0;i<n;i++){
        t+=Q[i];
    }
    return t;
}
