
#include <stdio.h>
#include <string.h>

struct THONGTIN{
    char maSV[10];
    char hoSV[20];
    char tenSV[30];
    float diemCK;
    char  lop[20];
};
 struct NODE{
    THONGTIN data;
    NODE *link;
};
struct LIST{
 	  NODE* first;
 	  NODE* last;
};
void init(LIST &l){
    l.first=l.last=NULL;
}
void them1Node(LIST &l,THONGTIN x){
    NODE *p=new NODE;
    p->data=x;
    p->link =NULL;

    if(l.first==NULL){
        l.first=l.last=p;
    }else{
        l.last->link=p;
        l.last=p;
    }
}
void nhap1(THONGTIN &x){
    printf("\nnhap ms: ");fflush(stdin);gets(x.maSV);
    printf("\nnhap lop: ");fflush(stdin);gets(x.lop);
    printf("\nnhap diem ck: ");scanf("%f",&x.diemCK);
}
void xuat1(THONGTIN x){
    printf("\n\n ms: ");puts(x.maSV);
    printf(" lop: ");puts(x.lop);
    printf(" diem ck: ");printf("%f",x.diemCK);
}
void taoDS(LIST &l){
    int n;
    printf("\nnhap n: ");scanf("%d",&n);
    THONGTIN x;
    for(int i=0;i<n;i++){
        nhap1(x);
        them1Node(l,x);
    }
}
void xuatDS(LIST l){
    for(NODE *p=l.first;p!=NULL;p=p->link){
        xuat1(p->data);
    }
}
void tach(LIST &l1,LIST &l2,LIST &l){
    for(NODE *p=l.first;p!=NULL;p=p->link){
        if(strcmp(p->data.lop,"y")==0){
            them1Node(l1,p->data);
        }else{
            them1Node(l2,p->data);
        }
    }
}

void hop(LIST l1,LIST l2,LIST &l){
    for(NODE *p=l1.first;p!=NULL;p=p->link){
        them1Node(l,p->data);
    }
    for(NODE *q=l2.first;q!=NULL;q=q->link){
        them1Node(l,q->data);
    }
    NODE *min;
    for(NODE *i=l.first;i!=l.last;i=i->link){
        min = i;
        for(NODE *j=l.first->link;j!=NULL;j=j->link){
            if(strcmp(min->data.maSV,j->data.maSV)>0) min=j;
        }
        if(min!=i){
            THONGTIN tam=min->data;
            min ->data = i->data;
             i->data=tam;
        }
    }
}
float dequi(NODE *first,int &dem){

    float tong=0;
    if(first != NULL){
        dem++;
        return tong=first->data.diemCK + dequi(first->link,dem);
    }
    else return 0;


}
int main(){
    int a,b;
    printf("\nnhap a,b: ");scanf("%d%d",&a,&b);
    for(int i=0;i<2-1;i++){
        for(int j=2-1;j>i;j++){
            if(a>b)swap(a,b);
        }
    }
    return 0;
}



int dq(int a[],int l, int r){
    int i,j,data;
    if(l<r) return -1;
    else{
        do{

            i=l,j=r,data = a[(l+r)/2];
            if(a[i]<data) i++;
            if(a[j]>data) j--;
            if(i<j){
                swap(a[i],a[j]);
                i++;j--;
            }
        }while(i<j);
        if(l<j) dq(a,l,j);
        if(i,r) dq(a,i,r);
    }
}
