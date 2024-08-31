#include <stdio.h>
#include <stdlib.h>

int main()
{
                        //tính trung bình cộng các số nhập từ bàn phím
    int n,a[100], tong=0;
    printf("\nnhap n so nguyen :");scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nhap vao phan tu thu a[%d]",i);scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        tong+=a[i];
    }
    printf("\ntrung binh cong la: %f",(float)tong/n);
    return 0;
}
