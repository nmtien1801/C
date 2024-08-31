#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

           //bài 1:xem số có thuộc đoạn [A;B] không
//   int a,A,B;
//   printf("\nnhap khoang [A;B]");
//   scanf("%d %d",&A,&B);
//    printf("\nnhap a");
//   scanf("%d",&a);
//   if(a>=A&&a<=B)
//   {
//       printf("\n%d thuoc doan [%d;%d]",a,A,B);
//   }
//   else if(a<=A&&a>=B)
//   {
//          printf("\n%d khong thuoc doan [%d;%d]",a,A,B);
//   }





//   char a;
//
//    printf("\nnhap a");
//   scanf("%c",&a);
//   if(a>='A'&&a<='Z')
//   {
//       printf("\n%c la chu hoa",a);
//   }
//   if(a>='a'&&a<='z')
//   {
//       printf("\n%c la chu thuong",a);
//   }
//    if(a>='0'&&a<='9')
//   {
//       printf("\n%c la chu so",a);
//   }



               //bài 2: tìm số tiền ngày lương làm
//    int nl,nc=0;
//    do{
//        printf("\nnhap so ngay lam viec:");
//        scanf("%d",&nl);
//    }while(nl>31);
//    if(nl<=22)
//    {
//      nc=nl;
//    }
//    else
//    {
//      nc=22+(nl-22)*2;
//    }
//    printf("\nso ngay cong la:%d",nc);
//    int luong=nc*300000;
//    printf("\n%d",luong);


                //bài 3: khi nào là tam giác va tìm diện tích
//    int a,b,c;
//    do
//    {
//        printf("\nnhap 3 canh:");scanf("%d%d%d",&a,&b,&c);
//
//    }while(a<0&b<0&c<0);
//
//    if(a+b>c&&a+c>b&&b+c>a)
//    {
//        if(a==b&&a==c)
//        {
//            printf("\nday la tam giac deu");
//        }
//        if((a==b||a==c||b==c)&&!(a==b&&a==c))
//        {
//            printf("\nday la tam giac can");
//        }
//        if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a))
//        {
//            printf("\nday la tam giac vuong");
//        }
//
//        float P,s;
//        P=(a+b+c)/2;
//        s=sqrt(P*(P-a)*(P-b)*(P-c));
//        printf("\nchu vi la %f",P);
//        printf("\ndien tich la %f",s);
//    }




            //bài 4: thời gian sau 1 giây là
//    int a,b,c,d=0;
//    do
//    {
//        printf("\nnhap gio, phut, giay:");scanf("%d%d%d",&a,&b,&c);
//
//    }while(a>24&b>59&c>59);
//    printf("\nthoi gian ban dau la %d:%d:%d",a,b,c);
//    if(c==59)
//    {
//        if(b==59)
//        {
//            if(a==23)
//            {
//                printf("\nthoi gian sau 1 giay la: 00:00:00");
//            }
//            else{printf("\nthoi gian sau 1 giay la:%d:%d:%d",a+1,d,c);}
//        }
//        else{printf("\nthoi gian sau 1 giay la:%d:%d:%d",a,b+1,d);}
//    }
//    else{printf("\nthoi gian sau 1 giay la:%d:%d:%d",a,b,c+1);}









                //bài 5:chuyển điểm sang thang điểm 4
//    float a;
//    do
//    {
//        printf("\nnhap diem :");
//        scanf("%f",&a);
//    }while(a<0||a>10);
//    if(a<4)
//    {
//        printf("Diem theo thang 4 la 0.00-Diem F");
//    }
//    if(a>=4&&a<=4.9)
//    {
//        printf("Diem theo thang 4 la 1.00–Diem D");
//    }
//    if(a>=5&&a<=5.4)
//    {
//        printf("Diem theo thang 4 la 1.5–Diem D+");
//    }
//     if(a>=5.4&&a<=6.4)
//    {
//        printf("Diem theo thang 4 la 2.0–Diem C");
//    }
//    if(a>=6.5&&a<=6.9)
//    {
//        printf("Diem theo thang 4 la 2.5–Diem C+");
//    }
//     if(a>=7.0&&a<=7.9)
//    {
//        printf("Diem theo thang 4 la 3.0-Diem B");
//    }
//     if(a>=8.0&&a<=8.4)
//    {
//        printf("Diem theo thang 4 la 3.5–Diem B+");
//    }
//    if(a>=8.5&&a<=8.9)
//    {
//        printf("Diem theo thang 4 la 3.7–Diem A");
//    }
//    if(a>=9.0&&a<=10)
//    {
//        printf("Diem theo thang 4 la 4.0 - Diem A+");
//    }



            //bài 022:tính số tiền điện3
//    int x;
//    do
//    {
//       printf("\nnhap so kwhs:");
//      scanf("%d",&x);
//      if(x<0){printf("\nnhap lai");}
//    }while(x<0);
//
//    if(x<=100)
//    {
//        printf("\nso tien tra la: %d",x*950);
//    }
//    if(x>100&&x<=150)
//    {
//        printf("\nso tien tra la: %d",100*950+(x-100)*1250);
//    }
//    if(x>150&&x<=200)
//    {
//        printf("\nso tien tra la:%d",100*950+50*1250+(x-150)*1350);
//    }
//    if(x>200)
//    {
//        printf("\nso tien tra la:%d",100*950+50*1250+50*1350+(x-200)*1550);
//    }


            //bai 023:tính số ngày trong tháng
//    int thang,nam;
//    do
//    {
//        printf("\nnhap thang va nam:");
//        scanf("%d%d",&thang,&nam);
//    }while(thang<0&&nam>12);
//
//    if(thang==4 ||thang==6 ||thang==9 ||thang==12)
//    {
//        printf("\nthang co 30 ngay");
//    }
//    if(thang==2)
//    {
//        if((nam%4==0&&nam%100!=0)||(nam%400==0))
//        {
//            printf("\nthang co 29 ngay");
//        }
//        else{printf("\nthang co 28 ngay");}
//    }
//
//    else  //(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12)
//    {
//        printf("\nthang co 31 ngay");
//    }





            //bai 024: nhập điểm và xem xếp loại
//    float x;
//    do{
//        printf("\nnhap diem:");
//        scanf("%f",&x);
//        if(x<0||x>10){printf("\nnhap sai");}
//
//    }while(x<0||x>10);
//    if(x<5)
//    {
//        printf("\nxep loai: yeu");
//    }
//    if(x>=5&&x<7)
//    {
//        printf("\nxep loai: trung binh");
//    }
//     if(x>=7&&x<8)
//    {
//        printf("\nxep loai: kha");
//    }
//    if(x>=8&&x<=10)
//    {
//        printf("\nxep loai: gioi");
//    }



            //bai 025:nhập 4 số nguyên và tìm số lớn nhất
//    int a,b,c,d;
//    printf("\nnhap vao 4 so nguyen:");
//    scanf("%d%d%d%d",&a,&b,&c,&d);
//    int max =a;
//    if(b>max&&b>c&&b>d)
//    {
//        max=b;
//        printf("\ntrong %d %d %d %d thi %d lon nhat",a,b,c,d,b);
//    }
//    else if(c>max&&c>b&&c>d)
//    {
//        max=c;
//        printf("\ntrong %d %d %d %d thi %d lon nhat",a,b,c,d,c);
//    }
//    else
//    {
//        max=d;
//        printf("\ntrong %d %d %d %d thi %d lon nhat",a,b,c,d,d);
//    }


    return 0;
}
