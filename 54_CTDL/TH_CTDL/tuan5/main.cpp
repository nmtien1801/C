#include <stdio.h>
#include <string.h>
typedef struct ngay{
    int ngay,thang,nam;
};
typedef struct SinhVien{
    char MSSV[10], hoTen[50];
    int gioiTinh;
    ngay ngaySinh;
    char diaChi[50];
    float dtb;
};
typedef struct Node{
    SinhVien data;
    Node *pnext;
};
typedef struct List{
    Node *phead, *ptail;
};
Node* getNode(SinhVien x);
void KhoiTaoList(List &l);
void addLast(List &l,Node *p);
void insertLast(List &l,SinhVien x);
int nhap1SV(SinhVien &sv);
int searchVT(List l,char ma[]);
int taoDsSV(List &l);
void xuat1(SinhVien sv);
void xuatDS(List l);
void xuat1(SinhVien sv);

void ghiFile(List &l,SinhVien x);
void docFile(List &l,SinhVien &x);

Node* timXoa(List &l,char ma[]);
void xoaNodeSauQ(List &l,Node *q);
void DsTren5(List l);
void suaDTB(List &l,char ma[]);
void hoanVi(Node*&p,Node *&q);
void sapXepTheoTen(List &l);
int main(){
    List l;
    KhoiTaoList(l);
    //taoDsSV(l);
//    printf("\n==========================================danh sach sinh vien====================================");
//    xuatDS(l);
//
//    char ma[10];
//    printf("\nnhap ma de xoa sau node do: ");fflush(stdin);gets(ma);
//    Node *q=timXoa(l,ma);
//    xoaNodeSauQ(l,q);
//    printf("\n\n==============================danh sach sinh vien sau khi xoa====================================");
//    xuatDS(l);
//
//    printf("\n\n===============================danh sach sinh vien tren 5====================================");
//    DsTren5(l);
//
//    printf("\nnhap ma de sua diem TB: ");fflush(stdin);gets(ma);
//    suaDTB(l,ma);
//    printf("\n\n===============================diem TB sau khi sua====================================");
//    xuatDS(l);
//
//    printf("\n\n===============================sap xep danh sach sinh vien theo ten====================================");
//    sapXepTheoTen(l);
//    xuatDS(l);
    SinhVien x;
    ghiFile(l,x);
    docFile(l,x);
    xuatDS(l);
    return 0;
}
Node* getNode(SinhVien x){
    Node *p=new Node;
    if(p==NULL){
        return NULL;
    }
    p->data= x;
    p->pnext=NULL;
    return p;
}
void KhoiTaoList(List &l){
    l.phead=l.ptail=NULL;
}
void addLast(List &l,Node *p){
    if(l.phead==NULL){
        l.phead=l.ptail=p;
    }else
    {
        l.ptail->pnext=p;
        l.ptail=p;
    }
}
void insertLast(List &l,SinhVien x){
    Node *p=getNode(x);
    if(p==NULL){
        return;
    }
    else{
        addLast(l,p);
    }
}
int nhap1SV(SinhVien &sv){
    fflush(stdin);
    printf("\nnhap ma so sinh vien: ");gets(sv.MSSV);
    if(strcmp(sv.MSSV,"0")==0){
        return 0;
    }
    printf("\nnhap ho ten sinh vien: ");fflush(stdin);gets(sv.hoTen);
    printf("\nnhap gioi tinh(1: nam,0: nu) ");scanf("%d",&sv.gioiTinh);
    printf("\nnhap ngay thang nam sinh: ");scanf("%d/%d/%d",&sv.ngaySinh.ngay,&sv.ngaySinh.thang,&sv.ngaySinh.nam);
    printf("\nnhap dia chi: ");fflush(stdin);gets(sv.diaChi);
    printf("\nnhap diem trung binh: ");scanf("%f",&sv.dtb);
    return 1;
}
int searchVT(List l,char ma[]){
    for(Node *p=l.phead;p!=NULL;p=p->pnext){
        if(strcmp(p->data.MSSV,ma)==0){
            return 1;
        }
    }
    return -1;
}
//void taoDsSV(List &l){
//    SinhVien x;
//    printf("nhap 0 de dung lai!");
//    int dung =nhap1SV(x);
//
//    while(dung != 0){
//        ghiFile(x);
//        printf("nhap 0 de dung lai!");
//        dung=nhap1SV(x);
//    }
//}
int taoDsSV(List &l){
    SinhVien x;
    int n;
    printf("nhap 0 de dung lai!");
    int dung =nhap1SV(x);
    while(dung != 0){
        insertLast(l,x);
        n++;
        printf("nhap 0 de dung lai!");
        do{
            dung= nhap1SV(x);
            if(searchVT(l,x.MSSV)==1)
                printf("\n\ntrung ma!!!!");
        }while(searchVT(l,x.MSSV)==1);
    }
    return n;
}
void xuat1(SinhVien sv){
    printf("\n\n ma so sinh vien: ");puts(sv.MSSV);
    printf(" ho ten sinh vien: ");puts(sv.hoTen);
    printf(" gioi tinh: ");
    if(sv.gioiTinh==1) printf("nam");
    else printf("nu");
    printf("\n ngay thang nam sinh: %d/%d/%d",sv.ngaySinh.ngay,sv.ngaySinh.thang,sv.ngaySinh.nam);
    printf("\n dia chi: ");puts(sv.diaChi);
    printf(" diem trung binh: %.2f",sv.dtb);
}
void xuatDS(List l){
    Node *p=l.phead;
    while(p!=NULL){
        xuat1(p->data);
        p=p->pnext;
    }
}
void ghiFile(List &l,SinhVien x){
    FILE *f;
    f=fopen("D:/a.txt","w");
    int n=taoDsSV(l);
    fwrite(&x,sizeof(SinhVien),n,f);
    fclose(f);
}
void docFile(List &l,SinhVien &x){
    FILE *f;
    f=fopen("D:/a.txt","r");
    fseek(f,0,SEEK_END);
    int n=ftell(f)/sizeof(SinhVien);
    rewind(f);
    for(int i=0;i<n;i++){
        fread(&x,sizeof(SinhVien),1,f);
        insertLast(l,x);
    }

    fclose(f);
}
Node* timXoa(List &l,char ma[]){
    Node *q;
    Node*p=l.phead;
    while(p!=NULL){
        if(strcmp(p->data.MSSV,ma)==0){
            q=p;
        }
        p=p->pnext;
    }
    return q;
}
void xoaNodeSauQ(List &l,Node *q){
    for(Node *p=l.phead;p!=NULL;p=p->pnext){
        if(strcmp(p->data.MSSV,q->data.MSSV)==0){
            Node *g=p->pnext;
            p->pnext=g->pnext;
            delete g;
        }
    }
}
void DsTren5(List l){
    for(Node *p=l.phead;p!=NULL;p=p->pnext){
        if(p->data.dtb>=5){
            xuat1(p->data);
        }else printf("\nkhong co sinh vien nao tren 5");
    }
}
void suaDTB(List &l,char ma[]){
    for(Node *p=l.phead;p!=NULL;p=p->pnext){
        if(strcmp(p->data.MSSV,ma)==0){
            printf("\ndiem trung binh truoc khi sua: ");
            printf("%.2f",p->data.dtb);
            printf("\nhap diem trung binh moi: ");scanf("%f",&p->data.dtb);

        }
    }
}
void hoanVi(SinhVien &a,SinhVien &b){
    SinhVien c=a;
    a=b;
    b=c;
}
void sapXepTheoTen(List &l){
    for(Node *p=l.phead;p!=l.ptail;p=p->pnext){
        Node *min=p;
        for(Node *q=p->pnext;q!=NULL;q=q->pnext){
            if(strcmp(p->data.hoTen,q->data.hoTen)>0){
                min=q;
            }
            SinhVien c= p->data;
            p->data=q->data;
            q->data=c;
        }
    }
}
