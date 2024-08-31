#include <stdio.h>
#include <stdlib.h>

int LinearSearch(int a[], int n, int x)
{
    int i=0;
    while(i<n && a[i]!=x)
        i++;
    if (i<n)	return i;
    return -1;
}
int LinearSearch_CaiTien(int a[], int n, int x)
{
    int i=0;
    a[n] = x;
    while(a[i]!=x)
        i++;
    if (i<n)	return i;
    return -1;
}

void NhapMang(int a[], int &n)
{
    printf("nhap n: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
}
int main()
{
    int a[100], n, x;
    NhapMang(a, n);

    printf("Nhap khoa can tim");
    scanf("%d", &x);
    int kq = LinearSearch(a, n, x);
    if(kq == -1)
        printf("Khong tim thay");
    else
        printf("Tim thay tai vi tri %d", kq);
//
    int kq2=LinearSearch_CaiTien(a,n,x);
    if(kq2 == -1)
        printf("Khong tim thay");
    else
        printf("Tim thay tai vi tri %d", kq2);
    return 0;
}
