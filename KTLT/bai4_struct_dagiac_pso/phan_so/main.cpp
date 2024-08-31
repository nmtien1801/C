#include <iostream>
#include <stdio.h>
#include <math.h>
 using namespace std;
typedef struct Ps{
  int tu;
  int mau;
}PS;
void input(PS &phanso){
  printf("\nnhap tu so: ");scanf("%d",&phanso.tu);
  do{
    printf("\nnhap mau so: ");scanf("%d",&phanso.mau);
  }while(phanso.mau==0);
}
int ucln(int a, int b){
  if(a<0||b<0){
    a*=-1;
  }
  while(a!=b){
    if(a>b)a=abs(a-b);
    else b=abs(b-a);
  }
  return a;
}

void toigian(PS &phanso){
    int UC=ucln(phanso.tu, phanso.mau);
    phanso.tu/=UC;
    phanso.mau/=UC;
}

void output(PS phanso){
  printf("\nphan so vua nhap la %d/%d",phanso.tu,phanso.mau);
}
phanso tong(PS &a,PS &b){
    PS c;
    c.tu=a.tu*b.mau+b.tu*a.mau;
    c.mau=a.mau*b*mau;
    toigian(c);
    return c;
}
int main()
{
  PS a;
  input(a);
  toigian(a);
  output(a);
  return 0;
}
