#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kt_so_ngto(int n){
  if(n<2) return 0;
  else if(n>2){
    for(int i=2;i<n;i++){
      if(n%i==0) return 0;
    }
  }
  return 1;
}

int tinh_so_ngay_trong_thang(int  thang,int nam){
  switch(thang){
    case 1:case 3:case 5:case 7:case 8:case 10:case 12: return 31;
    case 2: if((nam%4==0&&nam%100!=0)||nam%400==0) return 29;
    else return 28;
    default: return 30;
  }
}

int vitri(float x,float y,float r){
  float d2=x*x+y*y;
  float r2=r*r;
  if(d2<r2) return 1;
  else if(d2==r2) return 0;
  else return -1;
}

int fibo(int n){
  int t1=1,t2=1,f=1;
  for(int i=3;i<=n;i++){
    f=t1+t2;
    t1=t2;
    t2=f;
  }
  return f;
}

int UCLN(int a,int b)
{
   while(a!=b){
     if(a<b)b-=a;
     else a-=b;
} return a;
}
int BCNN(int a,int b){
   return (a*b)/UCLN(a,b);
}

void tim_max_min(int n){
  int max = n%10;
  int min =n%10;
  while(n!=0){
    int a= n%10;
    n/=10;
    if(max<a) max=a;
    if(min>a) min=a;
  }  printf("\nmax là :%d",max);
  printf("\nmin là :%d",min);
}
int main()
{
    int n,thang,nam,a,b;
    float x,y,r;
    int luachon;
    do{
        printf("\n================Menu===============");
        printf("\n1. kiem tra so nguyen to");
        printf("\n2. tinh sô ngay trong thang");
        printf("\n3. vi tri tuong doi cua diem va duong tron");
        printf("\n4 tinh day fibo");
        printf("\n5. tim UCLN va BCNN");
        printf("\n6. tim max min trong day so");
        printf("\n0. thoat");
        printf("\nnhap lua chon: ");

        scanf("%d",&luachon);
        switch(luachon){
            case 0: break;
            case 1:
                do{
                    printf("\nnhap n: ");scanf("%d",&n);
                }while(n<0);
                for(int i=2;i<=n;i++){
                if(kt_so_ngto(i)== 1) printf("\n%d la so ngto",i);
                }break;
            case 2:
                do{
                    printf("\nnhap thang: ");scanf("%d",&thang);
                }while(thang<1||thang>12);
                do{
                    printf("\nnhap nam: ");scanf("%d",&nam);
                }while(nam<0);
                printf("\nthang %d co %d ngay",thang,tinh_so_ngay_trong_thang(thang,nam));break;
            case 3:
                do{
                    printf("\nnhap toa do x,y: ");scanf("%f%f",&x,&y);
                    printf("\nnhap ban kinh: ");scanf("%f",&r);
                }while(r<0);
                if(vitri(x,y,r)==1) printf("\ndiem nam trong duong tron");
                if(vitri(x,y,r)==0) printf("\ndiem nam tren duong tron");
                if(vitri(x,y,r)==-1) printf("\ndiem nam ngoai duong tron");
                break;
            case 4:
                do{
                    printf("\nnhap n: ");scanf("%d",&n);
                }while(n<1);
                printf("\nket qua la: %d",fibo(n));
                break;
            case 5:
                 do{
                    printf("\nnhap a: ");scanf("%d",&a);
                    printf("\nnhap b: ");scanf("%d",&b);
                }while(a<0||b<0);
                printf("\nUCLN cua 2 so là: %d",UCLN(a,b));
                printf("\nBCNN cua 2 so la: %d",BCNN(a,b));
                break;
            case 6:
                  do{
                    printf("\nnhap n: "); scanf("%d",&n);
                  }while(n<0);
                  tim_max_min(n);
                  break;
        }
    }while(luachon);
    return 0;
}
