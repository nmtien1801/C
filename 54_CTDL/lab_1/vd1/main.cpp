#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>

void NhapMang(int a[], int &n)
{
    printf("nhap n: ");
    scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
}
void PhatSinhMang(int a[], int n)
{
	srand(time(NULL));
	for(int i=0; i<n; i++)
	{
		a[i] = rand();
	}
}
void XuatMang(int a[], int n)
{
	printf("\n");
	for(int i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
}
int GhiMangVaoFileText(char* filename, int a[], int n)
{
	FILE* f = fopen(filename, "w");
	if(!f)
		return 0;
	for(int i=0; i<n; i++)
 		fprintf(f,"%d",a[i]);
	fclose(f);
	return 1;
}
int DocFileTextVaoMang(char* filename, int a[], int &n)
{
	FILE* f = fopen(filename, "r");
	if(!f)
		return 0;
	int i=0;
	while(!feof(f))
	{
 		fscanf(f,"%d",&a[i]);
		i++;
	}
	n = i;
	fclose(f);
}




int main()
{
    int a[100], n;
    char file[100];

    NhapMang(a,n);
    printf("nhap ten file can ghi: ");
    scanf("%s",file);
    GhiMangVaoFileText(file,a,n);

    printf("nhap ten file can doc: ");
    scanf("%s",file);
    GhiMangVaoFileText(file,a,n);
    XuatMang(a,n);
    return 0;
}
