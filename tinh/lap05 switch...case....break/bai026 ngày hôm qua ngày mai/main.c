#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, month, year, tg;
    printf("\nnhap vao ngay,thang,nam cua hien tai :");scanf("%d%d%d",&day,&month,&year);
    int day1=day, month1=month, year1=year;

    // Xac dinh so ngay trong thang
    switch(month)
    {
        case 4:
        case 6:
        case 9:
        case 11:
            tg = 30;
            break;
        case 2:
            tg = 28 + ((year%4==0 && year%100) || (year%400==0));
            break;
        default:
            tg = 31;
    }

    // Hien thi ngay mai
    day = (day%tg)+1;
    if(day==1)
    {
        month = (month%12)+1;
    }

    printf("\nngay mai: %d/%d/%d",day,month,year+(month==1 && day==1));
    // Hien thi ngay hom qua
    if(day1==1)
    {
        switch(month1-1)
        {
            case 4:
            case 6:
            case 9:
            case 11:
                day1=30;
                break;
            case 2:
                day1=28+((year1%4==0 && year1%100) || (year1%400==0));
                break;
            default:
                day1=31;
        }
        if(month1==1)
        {
            month1=12;
            year1--;
        }
        else
        {
            month1--;
        }
    }
    else
    {
        day1--;
    }

    printf("\nhon qua: %d/%d/%d",day1,month1,year1);
    return 0;
}
