#include <stdio.h>
#include <math.h>
void menu(){
    printf("\n\n======{12,2,15,-3,8,5,1,-8,6,0,4,15}========\n");
    printf("\n1. sap xep tang dan");
    printf("\n2. tim so lon thu 3 trong day");
    printf("\n3. dem so phan tu lon nhat trong day");
    printf("\n4. sap xep theo tri tuyet doi tang dan");
    printf("\n5. sap xep so duong o dau mang giam dan - so am cuoi mang tang");
    printf("\n6. sap xep so chan o dau mang tang dan - so le cuoi mang giam");
    printf("\n7. xuat mang");
    printf("\n9. THOAT");
    printf("\n===============================================\n");
}
void hoanVi(int &a,int &b){
    int temp= a;
    a=b;
    b=temp;
}
void xuat(int a[]){
    for(int i=0;i<12;i++){
        printf("%d ",a[i]);
    }
}
void sortTang(int a[]){
    for(int i=1;i<12;i++){
        int x = a[i];
        int pos = i-1;
        while(pos>=0 && x<a[pos]){
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
    }
}
void sortGiam(int a[]){
    for(int i=1;i<12;i++){
        int x = a[i];
        int pos = i-1;
        while(pos>=0 && x>a[pos]){
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
    }
}
void timMax(int a[]){
    sortTang(a);
    printf("\nphan tu lon thu 3 trong day: %d", a[12-3]);
}
int demMax(int a[]){
    sortTang(a);
    int x= a[11],dem = 0;
    for(int i=0;i<12;i++){
        if(x == a[i]) dem++;
    }
    return dem;
}
void sortAbsTang(int a[]){
    for(int i=0;i<11;i++){
        for(int j=i+1;j<12;j++){
            if(abs(a[i]) > abs(a[j])){
                hoanVi(a[i],a[j]);
            }
        }
    }
}
void sortChanLe(int a[]){
    sortTang(a);
    for(int i=0;i<12-1;i++){
        for(int j=i+1;j<11;j++){
            if(a[i]%2!=0 && a[j]%2==0){
                hoanVi(a[i],a[j]);
            }
        }
    }
    for(int k=0;k<11;k++){
       for(int h=k+1;h<12;h++){
            if(a[k]%2!=0 && a[h]%2!=0){
                if(a[k]<a[h]){
                    hoanVi(a[k],a[h]);
                }
            }
        }
        }
}
void sortAmDuong(int a[]){
    sortGiam(a);
    for(int i=0;i<12-1;i++)
	{
			if(a[i]<0)
			{
				if(a[i]>a[i+1])
				{
                    hoanVi(a[i+1],a[i]);
				}

			}

    }
}
int main()
{
    int a[13] = {12,2,15,-3,8,5,1,-8,6,0,4,15};
    int chon=0;
    do{
        menu();
        printf("\nnhap lua chon: ");scanf("%d",&chon);
        switch(chon){
        case 1:
            sortTang(a);
            break;
        case 2:
            timMax(a);
            break;
        case 3:
            printf("\nso phan tu lon nhat trong mang la: %d",demMax(a));
            break;
        case 4:
            sortAbsTang(a);
            break;
        case 5:
            sortAmDuong(a);
            break;
        case 6:
            sortChanLe(a);
            break;
        case 7:
            xuat(a);
            break;
        }
    }while(chon<8);
    return 0;
}
