#include <stdio.h>
#include <string.h>
typedef struct sinhvien{
    char ma[50];
    char hoten[50];
    float dtb;
};
typedef struct Node{
    sinhvien data;
    Node *pnext;
};
typedef struct List{
    Node *phead;
    Node *ptail;
};
Node* getNode(sinhvien x){
    Node *p=new Node;
    p->data=x;
    p->pnext=NULL;
    return p;
}
void khoitaoList(List &l){
    l.phead=l.ptail=NULL;
}
void addlast(List &l,Node *p){
    if(l.phead==NULL){
        l.phead=l.ptail=p;
    }
    else{
        l.ptail->pnext=p;
        l.ptail=p;
    }
}
void insertLast(List &l,sinhvien x){
    Node *p=getNode(x);
    if(p==NULL){
        return;
    }
    else{
        addlast(l,p);
    }
}
Node *timNode(List &l,char ma[]){
    Node *q;
    for(Node *p=l.phead;p!=NULL;p=p->pnext){
        if(strcmp(p->data.ma,ma)==0){
            q=p;
        }
    }
    return q;
}
void xoadau(List &l){
    if(l.phead== NULL) return;
    Node *p=l.phead;
    l.phead= p->pnext;
    if(l.phead==NULL) l.ptail=NULL;
    delete p;
}
void xoacuoi(List &l){
    for(Node *p=l.phead;p!=NULL;p=p->pnext){
        if(p->pnext==l.ptail){
            delete l.ptail;
            p->pnext==NULL;
            l.ptail=p;
        }
    }
}
void xoa(List &l,Node *q){
    if(q==l.phead){
        xoadau(l);
    }
    else if(q==l.ptail){
        xoacuoi(l);
    }
    else{
        for(Node *p=l.phead;p!=l.ptail;p=p->pnext){
            if(strcmp(p->pnext->data.ma,q->data.ma)==0){
                Node *g=p->pnext;
                p->pnext=g->pnext;
                delete g;
            }
        }
    }
}
void nhap1(sinhvien &x){
    printf("\nnhap ma: ");fflush(stdin);gets(x.ma);
    printf("\nnhap ho ten: ");fflush(stdin);gets(x.hoten);
    printf("\nnhap dtb: ");scanf("%f",&x.dtb);
}
void xuat1(sinhvien x){
    printf("\n\nnhap ma: ");puts(x.ma);
    printf("nhap ho ten: ");puts(x.hoten);
    printf("nhap dtb: %.2f",x.dtb);
}
void xuatDs(List &l){
    for(Node *p=l.phead;p!=NULL;p=p->pnext){
        xuat1(p->data);
    }
}
void sua(List &l,Node *q){
    for(Node *p=l.phead;p!=NULL;p=p->pnext){
            if(strcmp(p->data.ma,q->data.ma)==0){
                printf("\nsinh vien can sua");
                xuat1(p->data);
                printf("\nsua lai");
                nhap1(p->data);
            }
        }
}
void ghiFile(sinhvien a[]){
    int n;
    printf("\nnhap n: ");scanf("%d",&n);
    for(int i=0;i<n;i++){
        nhap1(a[i]);
    }
    FILE *f;
    f=fopen("D:/a.txt","wb");
    fwrite(a,sizeof(sinhvien),n,f);
    fclose(f);
}
void docfile(List &l){
    FILE *f;
    f=fopen("D:/a.txt","rb");
    fseek(f,0,SEEK_END);
    int n= ftell(f)/sizeof(sinhvien);
    rewind(f);
    sinhvien x;
    for(int i=0;i<n;i++){
        fread(&x,sizeof(sinhvien),1,f);
        insertLast(l,x);
    }
    fclose(f);
}
int main(){

    List l;
    sinhvien a[100];
    khoitaoList(l);
    int chon;
    char ma[50];
    do{
        printf("\n1. ghi");
        printf("\n2. doc");
        printf("\n3. xuat");
        printf("\n4. xoa");
        printf("\n5. sua");
        printf("\n\nnhap lua chon");scanf("%d",&chon);

        switch(chon){
            case 1:{
                ghiFile(a);break;
            }
            case 2:
                docfile(l);break;
            case 3:
                xuatDs(l);break;
            case 4:{
                 printf("\nnhap ma xoa: ");fflush(stdin);gets(ma);
                 Node *q=timNode(l,ma);
                xoa(l,q);break;
            }
            case 5:{
                printf("\nnhap ma sua: ");fflush(stdin);gets(ma);
                 Node *q=timNode(l,ma);
                sua(l,q);break;
            }
        }
    }while(chon<10);
    return 0;
}
