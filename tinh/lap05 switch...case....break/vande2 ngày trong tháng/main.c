#include <stdio.h>
#include <stdlib.h>

int main()
{
        int thang,nam;
    printf("\nnhap thang va nam:");scanf("%d%d",&thang,&nam);
    switch(thang)
    {
        case 4:case 6:case 9:case 11:
            printf("\nthang co 30 ngay");
            break;
        case 2:
            if((nam%4==0&&nam%100!=0)||(nam%400==0))
            {
                printf("\nthang co 29 ngay");
            }
            else
                printf("\nthang co 28 ngay");
            break;
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            printf("\nthang co 31 ngay");
            break;
    }
    return 0;
}
