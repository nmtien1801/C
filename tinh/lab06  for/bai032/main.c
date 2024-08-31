#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    printf("\nnhap vao so n: ");scanf("%d",&n);
                    //tính tổng các số từ 1 -> n
    int tong =0;
    for(int i=1;i<=n;i++)
    {
        tong+=i;
    } printf("\ntong la: %d",tong);



                    //tính tổng các số chẵn
    int tong2 =0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0) tong2+=i;
    }
    printf("\ntong so chan la: %d",tong2);


                        //tính tổng các số TN chia het cho 3 va <=N
    int tong3 =0;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0) tong3+=i;
    }
    printf("\ntong so chia het cho 3 la: %d",tong3);
                        //tổng số lẻ bình phương
    int tong4=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0) tong4+=pow(i,2);
    }
    printf("\ntong binh phuong cac so le la: %d",tong4);
    return 0;
}
