#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <random>

int soSanh=0;
int gan=0;
void nhap(int a[],int &n){
    printf("\nnhap n: ");scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void phatSinh(int a[],int &n){
    printf("\nnhap n: ");scanf("%d",&n);
    srand(time(NULL));
    for(int i=0;i<n;i++){
        a[i]= rand();
    }
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}void hoanVi(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void SelectionSort(int a[],int n){
    soSanh = 0;
    gan=0;
    for(int i=0;i<n-1;i++){
        int min = i;
        gan +=2;
        soSanh++;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min = j;
                gan++;
                soSanh++;
            }
            gan++;
            soSanh++;
        }
        if(min != i){
            hoanVi(a[i],a[min]);
            soSanh++;
        }
    }
    printf("\nphep so sanh: %d",soSanh);
    printf("\nphep gan: %d",gan);
}
int quickSort(int a[],int l, int r,int &soSanh,int &gan){
    soSanh = 0;gan=0;
    if(l>r) return -1;
    else{
        int i,j,x;
        x=a[(l+r)/2]; gan++;
        i=l; gan++;
        j=r; gan++;
        do{
            while(a[i]<x) {i++;soSanh++;gan++;}
            while(a[j]>x) {j--;soSanh++;gan++;}
            if(i<=j){
                hoanVi(a[i],a[j]);
                i++;gan++;
                j--;gan++;
                soSanh++;
            }
            soSanh++;
        }while(i<j);
        if(l<j) quickSort(a,l,j,soSanh,gan);
        if(i<r) quickSort(a,i,r,soSanh,gan);
    }
}
//=====================================
void heapify(int a[],int n, int i){
    int root = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l<n && a[l]>a[root]){
        root = l;
    }
    if(r<n && a[r]>a[root]){
        root = r;
    }
    if(root != i){
        hoanVi(a[i],a[root]);
        heapify(a,n,root);
    }
}
void heapSort(int a[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(a,n,i);
        gan++;
        soSanh++;
    }
    for(int i=n-1;i>0;i--){
        hoanVi(a[0],a[i]);
        heapify(a,i,0);
        soSanh++;
        gan++;
    }
}
//========================================
void merge(int a[],int l,int m,int r){
    int n1= m-l+1;
    int n2= r-m;

    int L[n1], R[n2];
    for(int i=0;i<n1;i++){
        L[i]=a[l+i];
    }
    for(int j=0;j<n2;j++){
        R[j]=a[m+r+j];
    }

    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=R[j];
        j++;
        k++;
    }


}
void mergeSort(int a[],int l,int r){
    if(l<r){
        int m= l+(r-l)/2;gan++;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        soSanh++;

        merge(a,l,m,r);
    }
}
void sortChanLe(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]%2==0 && a[j]%2==0){
                if(a[i]>a[j]){
                    hoanVi(a[i],a[j]);
                }
            }
            else if(a[i]%2!=0 && a[j]%2!=0){
                if(a[i]<a[j]){
                    hoanVi(a[i],a[j]);
                }
            }
        }
    }
}
void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int pos = i-1;
        int x=a[i];
        while(pos<n && a[pos]>x){
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos+1]=x;
    }
}
int binarySearch(int arr[], int item, int low, int high) {
   if (high <= low)
      return (item > arr[low])? (low + 1): low;
      int mid = (low + high)/2;
   if(item == arr[mid])
      return mid+1;
   if(item > arr[mid])
      return binarySearch(arr, item, mid+1, high);
      return binarySearch(arr, item, low, mid-1);
}
void BinaryInsertionSort(int arr[], int n) {
   int i, loc, j, k, selected;
   for (i = 1; i < n; ++i) {
      j = i - 1;
      selected = arr[i];
      loc = binarySearch(arr, selected, 0, j);
      while (j >= loc) {
         arr[j+1] = arr[j];
         j--;
      }
      arr[j+1] = selected;
   }
}
void InterchangeSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                hoanVi(a[i],a[j]);
            }
        }
    }
}
void BubbleSort(int a[], int n)
{
	for (int i=0; i<n-1; i++)
		for (int j=n-1; j>i; j--)
		   if(a[j] < a[j-1])hoanVi(a[j], a[j-1]);
}
void shakerSort(int a[], int n)
{
	int Left = 0;
	int Right = n - 1;
	int k = 0;
	while (Left < Right)
	{
		for (int i = Left; i < Right; i++)
		{
			if (a[i] > a[i + 1])
			{
				hoanVi(a[i], a[i + 1]);
				k = i;
			}
		}
		Right = k;
		for (int i = Right; i > Left; i--)
		{
			if (a[i] < a[i - 1])
			{
				hoanVi(a[i], a[i - 1]);
				k = i;
			}
		}
		Left = k;
	}
}
void shellSort(int a[], int n){
	int interval, i, j, temp;
	for(interval = n/2; interval > 0; interval /= 2){
		for(i = interval; i < n; i++){
			temp = a[i];
			for(j = i; j >= interval && a[j - interval] > temp; j -= interval){
				a[j] = a[j - interval];
			}
			a[j] = temp;
		}
    }
}
int main(){
    int a[10000],n;
    int chon;
    clock_t start,end;
    do{
        printf("\n\n================menu===============");
        printf("\n1. nhap mang thu cong");
        printf("\n2. phat sinh mang");
        printf("\n3. xuat mang");
        printf("\n4. selectionSort");
        printf("\n5. quickSort");
        printf("\n6. heapSort");
        printf("\n7. mergeSort");
        printf("\n8. sort chan tang le giam, vi tri khong thay doi");
        printf("\n9. insertionSort");
        printf("\n10. Binary Insertion Sort.");
        printf("\n11. Interchange Sort");
        printf("\n12.  Bubble Sort.");
        printf("\n13. Shaker Sort.");
        printf("\n14. Shell Sort");
        printf("\n===================================");
        printf("\nnhap lua chon: ");scanf("%d",&chon);
        switch(chon){
        case 1:
            nhap(a,n);break;
        case 2:
            phatSinh(a,n);break;
        case 3:
            xuat(a,n);break;
        case 4:{
            start = clock();
            SelectionSort(a,n);
            end = clock();
            double t=end-start;
            printf("\nthoi gian thuc thi: %lf",t);break;
        }
        case 5:{
            start = clock();
            quickSort(a,0,n-1,soSanh,gan);
            end = clock();
            double t=end-start;
            printf("\nthoi gian thuc thi: %lf",t);
            printf("\nphep so sanh: %d",soSanh);
            printf("\nphep gan: %d",gan);
            break;
        }
        case 6:{
            start = clock();
            heapSort(a,n);
            end = clock();
            double t=end-start;
            printf("\nthoi gian thuc thi: %lf",t);
            printf("\nphep so sanh: %d",soSanh);
            printf("\nphep gan: %d",gan);
            break;
        }
        case 7:{
            start = clock();
            mergeSort(a,0,n-1);
            end = clock();
            double t=end-start;
            printf("\nthoi gian thuc thi: %lf",t);
            printf("\nphep so sanh: %d",soSanh);
            printf("\nphep gan: %d",gan);
            break;
        }
        case 8:
            sortChanLe(a,n);break;
        case 9:
            insertionSort(a,n);break;
        case 10:
            BinaryInsertionSort(a,n);break;
        case 11:
            InterchangeSort(a,n);break;
        case 12:
            BubbleSort(a,n);break;
        case 13:
            shakerSort(a,n);break;
        case 14:
            shellSort(a,n);break;
        }
    }while(chon<15);
    return 0;
}
