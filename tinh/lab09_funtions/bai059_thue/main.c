#include <stdio.h>
#include <stdlib.h>

float thue(float luong){
    if(luong<=9000000)return 0;
    else if(luong<=20000000)return 0.25*luong;
    else 0.25*20000000+0.4*(luong-20000000);
}
int main()
{
    float luong;
    do{
        printf("\nnhap luong: ");scanf("%f",&luong);
    }while(luong<0||luong>50000000);
    float nhan=luong-thue(luong);
    printf("\nluong nhan duoc la: %.3f",nhan);
    return 0;
}
