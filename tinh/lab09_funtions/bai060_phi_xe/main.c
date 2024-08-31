#include <stdio.h>
#include <stdlib.h>
int tien_gui(int n){
    if(n<5)return n*2000;
    else if(n<8)return 4*2000+1000*(n-4);
    else return 4*2000+3*1000+(n-4-3)*5000;
}
int main()
{
    int v,r,xe=0,dem=0,tgio=0,tphi=0;
    do{
      printf("\nnhap gio vao: ");scanf("%d",&v);
      if(v==0)break;
      printf("\nnhap gio ra: ");scanf("%d",&r);
      xe++;
      while(v!=r){
        if(v>r)v--;
        else{
          v++;
        }
        dem++;
      }

    }while(v!=0&&r!=0);

    tgio+=dem;
    printf("\ntong so xe la: %d",xe);
    printf("\ntong so gio la: %d",tgio);
    printf("\ntong so phi la: %d",tien_gui(dem));
    printf("\ntrung binh so gio moi xe la: %.1f",(float)tgio/xe);
    printf("\ntrung binh so tien moi xe la: %.1f",(float)tien_gui(dem)/xe);
    return 0;
}
