#include <iostream>
#include <stdio.h>
#include <math.h>
#define max 100
 using namespace std;

typedef struct point
{
  int x;
  int y;
}Point;

float P1P2(Point P1, Point P2){
  float AB;
  AB=sqrt(pow((P1.x-P2.x),2)+pow((P1.y-P2.y),2));
  return AB;
}
float SP1P2P3(Point P1, Point P2, Point P3){
  if(((P3.x-P1.x)/(P2.x-P1.x))==((P3.y-P1.y)/(P2.y-P1.y))){
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

float S(Point a[], int &n){
    int i=1;
    float S=0;
  for(int i=1;i<=n;i++){
    printf("\nnhap toa do diem thu %d",i);
    printf("\nnhap hoanh do: ");scanf("%d",&a[i].x);
    printf("\nnhap tung do: ");scanf("%d",&a[i].y);
  }
  for(int i=1;i<=n-2;i++){
    S+=SP1P2P3(a[1],a[i+1],a[i+2]);
  }
  return S;
}

int main()
{
  Point a[100];
  int n;
  do{
    printf("\nnhap n dinh cua da giac: ");scanf("%d",&n);
  }while(n<3);
  printf("\ndien tich da giac la: %f",S(a,n));

  return 0;
}
