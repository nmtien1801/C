#include <stdio.h>
#include <string.h>

typedef struct ngay{
    int ngay,thang,nam;
};
typedef struct thongtin{
    char ma[30];
    ngay ngay;
};
typedef struct Node{
    Node* pnext;
    thongtin data;
};
typedef struct List{
    Node *phead;
    Node* ptail;
};
void khoiTao(List &l){
    l.phead=l.ptail=NULL;
}
Node *getNode(thongtin x){
    Node *p = new Node;
    p->data=x;
    p->pnext=NULL;
    return p;
}
void themCuoi(List &l, thongtin x){
    Node *p=getNode(x);
    if(l.phead==NULL){
        l.phead=l.ptail=p;
    }else{
        l.ptail ->pnext=p;
        l.ptail=p;
    }
}
void nhap1(thongtin &x){
    printf("\nnhap ma: ");fflush(stdin);gets(x.ma);
    printf("\nnhap ngay: ");scanf("%d/%d/%d",&x.ngay.ngay,&x.ngay.thang,&x.ngay.nam);
}
void xuat1(thongtin x){
    printf("\n\nma: ");puts(x.ma);
    printf("ngay : %d/%d/%d",x.ngay.ngay,x.ngay.thang,x.ngay.nam);
}
void taoDS(List &l){
    thongtin x;
    int n;
    printf("\nnhap n: ");scanf("%d",&n);
    for(int i=0;i<n;i++){
        nhap1(x);
        themCuoi(l,x);
    }
}
void xuatDS(List l){
    for(Node *p=l.phead;p!=NULL;p=p->pnext){
        xuat1(p->data);
    }
}
void TaoDsTen(char ngay[],List l,List &l2){
    for(Node *p=l.phead;p!=NULL;p=p->pnext){
        if(strcmp(p->data.ngay,ngay)==0){
            themCuoi(l2,p->data);
        }
    }
}
int dem(Node *phead){
    if(phead!=NULL) {
        return 1+ dem(phead->pnext);
    }else{
        return 0;
    }
}
void timkiem(char ma[],List l){
    for(Node *p=l.phead;p!=NULL;p=p->pnext){
        if(p->data.ngay == ){
            themCuoi(l2,p->data);
        }
    }
}
int main(){
    List l;
    List l2;
    khoiTao(l2);
    khoiTao(l);
    taoDS(l);
    xuatDS(l);
    printf("\n=======================\n");
    TaoDsTen("1/1/1",l,l2);
    xuatDS(l2);
    printf("\n=======================\n");
    printf("%d",dem(l2.phead));


    return 0;
}
