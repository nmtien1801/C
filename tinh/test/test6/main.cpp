/* Su dung mode: wb,ab,rb,r+b
   Cac ham fwrite, fread, fseek, ftell de to chuc CSDL
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void taomoi(char *ttep);
void bosung(char *ttep);
void suachua(char *ttep);
void xem(char *ttep);
// Khai bao
typedef struct
{
	char ht[25];
	int tuoi;
	float luong;
}NHANVIEN;
long size = sizeof(NHANVIEN);
int menu();
int main(int argc, char *argv[])
{
	int chon;
	char *ttep="D:\\DSCB.txt";
	do
	{
		chon = menu();
		switch(chon)
		{
			case 1: taomoi(ttep); break;
			case 2: bosung(ttep); break;
			case 3: suachua(ttep); break;
			case 4: xem(ttep); break;
		}

	}
	while (chon>0 && chon<5);
}
int menu()
{
	int chon;
	printf("\n 1. Tao moi");
	printf("\n 2. Bo sung");
	printf("\n 3. Sua chua");
	printf("\n 4. Hien thi du lieu");
	printf("\n 5. Thoat");
	scanf("%d",&chon);
	return chon;
}
void taomoi(char *ttep)
{
	NHANVIEN nv;
	FILE *fp;
	int n = 0;
	if((fp=fopen(ttep,"wb"))== NULL)
	{
//		cout<<"khong the mo tep.\n";
		exit(1);
	}
	while(1)
	{
		system("cls");
		printf("\n Nguoi thu %d: \n", n+1);
		printf("\n Nhap vao ho ten- Go enter de ket thuc:");
		fflush(stdin);
		gets(nv.ht);
		if(nv.ht[0] == '\0') break;
		printf("\n Tuoi:");
		scanf("%d",&nv.tuoi);
		printf("\n Luong:");
		scanf("%f",&nv.luong);
		n++;
		fwrite(&nv,sizeof(NHANVIEN),1,fp);//ghi vao file
	}
	fclose(fp);//dong file
}
void bosung(char *ttep)
{
	NHANVIEN nv;
	FILE *fp;
	int n = 0;
	fp=fopen(ttep,"ab");
	fseek(fp,0,SEEK_END);// Con tro chi ve vi tri cuoi tep
	n = ftell(fp)/size; // So ban ghi
	while(1)
	{
		system("cls");
		printf("\n Nguoi thu %d: \n", n+1);
		printf("\n Nhap vao ho ten- Go enter de ket thuc:");
		fflush(stdin);
		gets(nv.ht);
		if(nv.ht[0] == '\0') break;
		printf("\n Tuoi:");
		scanf("%d",&nv.tuoi);
		printf("\n Luong:");
		scanf("%f",&nv.luong);
		n++;
		fwrite(&nv,sizeof(NHANVIEN),1,fp);//ghi vao file
	}
	fclose(fp);//dong file
}
void suachua(char *ttep)
{
	NHANVIEN nv;
	FILE *fp;
	int n, i;
	if((fp=fopen(ttep,"r+b"))==NULL)
	{
//		cout<<"khong the mo tep.\n";
		exit(1);
	}

//	fseek(fp,0,SEEK_END);// Con tro chi ve vi tri cuoi tep
//	n = ftell(fp)/size; // So ban ghi
	while(1)
	{
		system("cls");
		printf("\n Sua thong tin nguoi thu : ");
		scanf("%d",&i);
		if(i>0 && i<n)
		{
			fseek(fp,(i-1)*size,SEEK_SET);// Con tro chi ve vi tri cuoi tep
            printf("\n Thong tin hien tai:");
			fread(&nv ,sizeof(NHANVIEN),1,fp);
			printf("\n Ho ten %s:", nv.ht);
			printf("\n Tuoi %d:", nv.tuoi);
			printf("\n Luong %f:", nv.luong);
			printf("\n Thong tin cap nhat:");
			printf("\n Nhap vao ho ten- Go enter de ket thuc:");
			fflush(stdin);
			gets(nv.ht);
			if(nv.ht[0] == '\0') break;
			printf("\n Tuoi:");
			scanf("%d",&nv.tuoi);
			printf("\n Luong:");
			scanf("%f",&nv.luong);
			printf("\n Co luu lai thong tin khong? C/K:");
			fflush(stdin);
			if(toupper(getchar())=='C')
			{
				fseek(fp,(i-1)*size,SEEK_SET);
				fwrite(&nv,sizeof(NHANVIEN),1,fp);//ghi vao file
			}

		}

	}
	fclose(fp);//dong file
}
void xem(char *ttep)
{
	NHANVIEN nv;
	FILE *fp;
	int i = 0;
	if((fp=fopen(ttep,"rb"))==NULL)
	{
	//	cout<<"khong the mo tep.\n";
		exit(1);
	}
	printf("\n STT  Ho ten        Tuoi     Luong \n");
	while(fread(&nv ,sizeof(NHANVIEN),1,fp)>0)
	{
		++i;
		printf("\n %-3d %-15s  %-5d  %-8.2f",i, nv.ht,nv.tuoi, nv.luong);
	}
	fclose(fp);//dong file
}
