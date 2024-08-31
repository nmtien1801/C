#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
            //bài 3:tính chu vi hình tròn
//    const float pi=3.1416;
//    float ban_kinh;
//    printf("nhap vao ban kinh :");
//    scanf("%f",&ban_kinh);
//
//    float chu_vi=2.0*pi*ban_kinh;
//    printf("\nchu vi la:%.3f",chu_vi);



            //bài 5:địa chỉ và giá trị biến
//      char a='A';
//      int b=10;
//      float c;
//      printf("\nnhap so thuc c :");scanf("%f",&c);
//      printf("\ngia tri cua bien a=%c. dia chi cua bien a=%p",a,&a);
//      printf("\ngia tri cua bien b=%d. dia chi cua bien b=%p",b,&b);
//      printf("\ngia tri cua bien c=%f. dia chi cua bien c=%p",c,&c);


            //bài 6 bảng điểm

//       printf("|STT|\t|HO DEM\t\t|\tTEN\t\t|DIEM TB|\n");
//       printf("|1|\t|nguyen Van\t|\tAn\t\t|9.5\t\n|");



            //bai 19:
//    float x,y,z;
//    printf("\nnhap x:");
//    scanf("%f",&x);
//    printf("\nnhap y:");
//    scanf("%f",&y);
//
//    z= sqrt(1+x*x+y*y)/(3+(x+y)*(x+y));
//    printf("%0.2f",z);
//    return 0;



            //bai 7:chuyển từ độ f qua độ c
//    float do_F, do_C;
//
//    printf("\nNhap vao nhiet do F:");
//    scanf("%f",&do_F);
//    printf("\nNhiet do C tuong ung:%0.3f", 1.0*5/9*(do_F-32));


                //bài 8 nhập giây chuyển về giờ / phút / giây
//      int giay,phut,gio;
//      printf("\nnhap giay:");
//      scanf("%d",&giay);
//      gio=giay/3600;
//      phut=(giay%3600)/60;
//      giay=giay%3600%60;
//      printf("\n%dgio %dphut %dgiay",gio,phut,giay);



            //bài 9 tính số tiền trả trong tuần
//      int ngay;
//      printf("\nnhap ngay :");
//      scanf("%d",&ngay);
//      int tuan=ngay/7;
//      int ngay_du=ngay%7;
//      printf("\nso tien tra la:%d",tuan*700000+ngay_du*120000);


                //bài 15 tính diện tích và cạnh huyền hinhf vuông
//    float a,b,ch,s;
//    printf("\nnhap vao canh vuong 1:");
//    scanf("%f",&a);
//    printf("\nnhap vao canh vuong 2:");
//    scanf("%f",&b);
//
//    s=(a*b)/2;
//    ch=sqrt(a*a+b*b);
//
//    printf("\ndien tich tam giac vuong la:%0.3f",s);
//    printf("\ncanh huyen tam giac vuong la:%0.3f",ch);



                //bài 10 phép toán logic
//    int a,b,c,max;
//    printf("\nnhap a:");scanf("%d",&a);
//    printf("\nnhap b:");scanf("%d",&b);
//    printf("\nnhap c:");scanf("%d",&c);
//
//    max=a>b?a:b;
//    max=max>c?max:c;
//    printf("%d",max);



               //bài 18
//    int x;
//    printf("\nnhap vao so nguyen x:");
//    scanf("%d",&x);
//    float Y=x*x;
//
//    for (int i =0; i<3; i++)
//    {
//        Y=x*x/(1+Y);
//    }
//    printf("%.3f",Y);


            //bài 17: phép nhân
int a,b;
do
{
    printf("\nnhap vao 2 so a,b:");scanf("%d%d",&a,&b);
    if(a&&b<=100)
    {
       printf("\nnhap a,b phai co 3 chu so");
    }
}while(a&&b<=100);
printf("\n %d\nx",a);
printf("\n %d",b);
printf("\n-----\n");

int x,y,z;
x=b%10*a;
y=(b/10)%10*10*a;
z=(b/100)%10*100*a;
printf("%d\n",x);
printf("%d\n",y);
printf("%d\n",z);
printf("\n-----\n");
printf("%d\n",x+y+z);


        //bài 20; tìm tam giác vuong
//    int a,b,c,max=0;
//    do
//    {
//        printf("\nnhap vao 3 canh cua tam giac:");scanf("%d%d%d",&a,&b,&c);
//        if(a<0&&b<0&&c<0)
//            printf("\nnhap so duong");
//    }while(a<0&&b<0&&c<0);
//
//    if(a>b&&a>c)
//    {
//        max=a;
//        if(b*b+c*c==max*max)
//        {
//            printf("\nY");
//        }
//        else
//        {
//            printf("\nN");
//        }
//    }
//
//    if(b>a&&b>c)
//    {
//        max=b;
//        if(a*a+c*c==max*max)
//        {
//            printf("\nY");
//        }
//        else
//        {
//            printf("\nN");
//        }
//    }
//
//    if(c>a&&c>b)
//    {
//        max=c;
//        if(a*a+b*b==max*max)
//        {
//            printf("\nY");
//        }
//        else
//        {
//            printf("\nN");
//        }
//    }


    return 0;

}







