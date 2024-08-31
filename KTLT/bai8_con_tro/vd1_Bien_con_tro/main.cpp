#include <iostream>
#include <stdio.h>
#include <math.h>
#define max 100

typedef struct point
{
  int x;
  int y;
}Point;

void nhap1_diem(Point *a){
    printf("\nnhap toa do: ");
    scanf("%d%d",&a->x,&a->y);
}
void input(Point *&a,int &n){
  printf("\nnhap n: ");scanf("%d",&n);
  a=new Point[n];
    for(int i=0;i<n;i++){
        nhap1_diem((a+i));
    }
}
float P1P2(Point *P1, Point *P2){
  float AB;
  AB=sqrt(pow((P1->x-P2->x),2)+pow((P1->y-P2->y),2));
  return AB;
}
float SP1P2P3(Point *P1, Point *P2, Point *P3){
  if(((P3->x-P1->x)/(P2->x-P1->x))==((P3->y-P1->y)/(P2->y-P1->y))){
    return 0;
  }
  else{
    float AB,AC,BC,P,S;
    AB=P1P2(P1,P2);
    AC=P1P2(P1,P3);
    BC=P1P2(P2,P3);
    P=(AB+AC+BC)/2;
    S=sqrt(P*(P-AB)*(P-AC)*(P-BC));
    return S;
  }
}

float S(Point *a, int n){
    float S;
  for(int i=0;i<n-2;i++){
  S=SP1P2P3((a+i),(a+i+1),(a+i+2));
  }
  return S;
}
void xuat1_diem(Point *a){
    printf("(%d,%d) ",a->x,a->y);
}
void output(Point *a,int n){
  for(int i=0;i<n;i++){
    xuat1_diem((a+i));
  }
}

int main()
{
  Point *a;
  int n;
    input(a,n);
    //output(a,n);

  printf("\ndien tich da giac la: %f",S(a,n));

  return 0;
}





//int x=10; int *xtro; xtro=&x;
//    printf("\n1.Dia chi cua bien x la:%p",&x);
//    printf("\n2.Dia chi cua bien xtro la:%p",&xtro);
//     printf("\n3.Noi dung cua bien x là: %d",x);
//     printf("\n4.Noi dung cua bien xtro là: %p",xtro);
//     printf("\nG5.Gia tri cua bien xtro tro den la:%d",*xtro);
//     *xtro = 50 ;
//    printf("\n6.Gia tri cua x la %d",x);
