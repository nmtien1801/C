#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>

// tìm kiếm nhị phân
int BinarySearch(int a[], int left, int right, int x)
{
if (left > right) return -1;
	int mid = (left + right) / 2;
 	if (x == a[mid])
 		return mid;
 	if (x < a[mid])
 		return BinarySearch(a,left,mid-1,x);
 	if (x > a[mid])
 		return BinarySearch(a,mid+1,right,x);
}
//tìm kiếm tuyến tính
int LinearSearch_CaiTien(int a[], int n, int x)
{
    int i=0;
    a[n] = x;
    while(a[i]!=x)
        i++;
    if (i<n)	return i;
    return -1;
}
//
void PhatSinhMangTang(int a[], int &n)
{
	srand(time(NULL));
	a[0] = rand()%50;
	for(int i=1; i<=n; i++)
	{
		a[i] = a[i-1] + rand()%10;
	}
}
void xuatmang(int a[],int n){
    for(int i=1; i<=n; i++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
    int a[100], n, x;
    printf("Ban muon phat sinh mang co bao nhieu ptu?");
	scanf("%d", &n);
    PhatSinhMangTang(a, n);
    xuatmang(a,n);
    printf("Nhap khoa can tim");
    scanf("%d", &x);

    clock_t start, end;

    start = clock();
    // tìm kiếm tuyến tính
    int kq = LinearSearch_CaiTien(a, n, x);
    if(kq == -1)
        printf("Khong tim thay\n");
    else
        printf("Tim thay tai vi tri %d\n", kq);
    end = clock();
    double t = end - start;
    printf("Thoi gian tim kiem tuyen tinh la: %f\n", t);

    clock_t start2, end2;
    start2 = clock();
    // tìm kiếm nhị phân
    int kq2 = BinarySearch(a, 0, n, x);
	if(kq2 == -1)
        printf("Khong tim thay\n");
	else
        printf("Tim thay tai vi tri %d\n", kq2);

    end2 = clock();
    double t2 = end2 - start2;
    printf("Thoi gian tim kiem nhi phan la: %f", t2);


    return 0;

}
