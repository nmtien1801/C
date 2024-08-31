#include <stdio.h>
int tinh_so_ngay_trong_thang(int  thang,int nam){
  switch(thang){
    case 1:case 3:case 5:case 7:case 8:case 10:case 12: return 31;
    case 2: if((nam%4==0&&nam%100!=0)||nam%400==0) return 29;
    else return 28;
    default: return 30;
  }
}
int main(void) {
  int thang,nam;
  do{
    printf("\nnhap thang: ");scanf("%d",&thang);
  }while(thang<1||thang>12);
  do{
    printf("\nnhap nam: ");scanf("%d",&nam);
  }while(nam<0);
  printf("\nthang %d co %d ngay",thang,tinh_so_ngay_trong_thang(thang,nam));
  return 0;
}
