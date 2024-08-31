#include <stdio.h>
#include <math.h>

typedef struct Diem
{
	int x, y, z;
} diem;

void nhap(diem N)
{
	//printf("Nhap toa do cua diem %c", N);
	printf("Toa do x: ");
	scanf("%d", &N.x);
	printf("Toa do y: ");
	scanf("%d", &N.y);
	printf("Toa do z: ");
	scanf("%d", &N.z);
}

float tinhKhoangCach(diem X, diem Y)
{
	float kc;
	kc = sqrt(pow((X.x - Y.x), 2) + pow((X.y - Y.y), 2) + pow((X.z - Y.z), 2));
	return kc;
}

float dientich(float a,float b, float c)
{
  float p=a+b+c;
  float S;
  S=sqrt(p*(p-a)*(p-b)*(p-c));
  return S;
}

int main()
{
	diem A, B,C;
	nhap(A);
	nhap(B);
  nhap(C);
  float a,b,c;
  a=tinhKhoangCach(A, B);
  b= tinhKhoangCach(B, C);
  c= tinhKhoangCach(A, C);
	printf("\nKhoang cach giua A va B = %.3f",a);
  printf("\nKhoang cach giua B va C = %.3f",b);
  printf("\nKhoang cach giua A va C = %.3f",c);
  printf("\ndien tich tam giac ABC la: %.3f",dientich(a,b,c));

	return 0;
}
