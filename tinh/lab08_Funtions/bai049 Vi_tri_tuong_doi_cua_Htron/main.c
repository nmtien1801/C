#include <stdio.h>
int vitri(float x,float y,float r){
  float d2=x*x+y*y;
  float r2=r*r;
  if(d2<r2) return 1;
  else if(d2==r2) return 0;
  else return -1;
}

int main(void) {
  float x,y,r;
  do{
  printf("\nnhap toa do x,y: ");scanf("%f%f",&x,&y);
  printf("\nnhap ban kinh: ");scanf("%f",&r);
  }while(r<0);
  if(vitri(x,y,r)==1) printf("\ndiem nam trong duong tron");
  if(vitri(x,y,r)==0) printf("\ndiem nam tren duong tron");
  if(vitri(x,y,r)==-1) printf("\ndiem nam ngoai duong tron");
  return 0;
}
