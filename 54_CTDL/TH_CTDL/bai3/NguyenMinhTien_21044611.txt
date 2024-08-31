#include <stdio.h>

typedef struct node{
    int data;
    node *pnext;
}NODE;
typedef struct list{
    NODE *phead;
    NODE *ptail;
}LIST;
void khoiTaoList(LIST &l){
    l.phead=l.ptail=NULL;
}
NODE *getNode(int data){
    NODE *p= new NODE;
    if(p==NULL){
        return NULL;
    }
    p->data=data;
    p->pnext=NULL;
    return p;
}
void addFirt(LIST &l, NODE *p){
    if(l.phead==NULL){
        l.phead=p;
    }
    else{
        p->pnext=l.phead;
        l.phead=p;
    }
}
void insertFirt(LIST &l,int x){
    NODE *p= getNode(x);
    if(p==NULL){
        return;
    }
    addFirt(l,p);
}
void addTail(LIST &l,NODE *p){
    if(l.phead==NULL){
        l.phead=l.ptail=p;
    }
    else{
        l.ptail->pnext =p;
        l.ptail = p;
    }
}
void insertTail(LIST &l, int x){
    NODE *p=getNode(x);
    addTail(l,p);
}
void xoaDau(LIST &l){
    NODE *p=new NODE;
    if(l.phead==NULL){
        return;
    }
    p=l.phead;
    l.phead =l.phead->pnext;
    p->pnext =NULL;
    delete p;
}
void xoaCuoi(LIST &l){
    for(NODE *p=l.phead;p!=NULL;p=p->pnext){
        if(p->pnext==l.ptail){
            delete l.ptail;
            p->pnext =NULL;
            l.ptail=p;
        }
    }
}
void createList(LIST &l){
    int x;
    printf("\nnhap gia tri x (thoat nhap -1): ");scanf("%d",&x);
    while(x!=-1){
        insertTail(l,x);
        printf("\nnhap gia tri x (thoat nhap -1): ");scanf("%d",&x);
    }
}
void xuatList(LIST &l){
    NODE *p;
    p = l.phead;

    while(p!= NULL)
    {
        printf("%10d", p->data);
        p = p->pnext;
    }
}
int demTrung(LIST l,int x){
    int dem=0;
    for(NODE *i=l.phead;i!=NULL;i=i->pnext){
        if(i->data == x){
            dem++;
        }
    }
    return dem;
}
void xoaNodeK(LIST &l,int x){
    NODE *temp= new NODE;
    if(l.phead->data ==x){
        xoaDau(l);
    }
    if(l.ptail->data==x){
        xoaCuoi(l);
    }
    for(NODE *i=l.phead;i!=NULL;i=i->pnext){
        if(i->data == x){
            temp->pnext = i->pnext;
            delete i;
        }
        temp=i;
    }
}
int KTtrung(LIST l,int x){
    for(NODE *i=l.phead;i!=NULL;i=i->pnext){
        if(i->data == x){
            return 1;
        }
    }
    return -1;
}
void TaoDsKhTrung(LIST &l){
    int x;
    printf("\nnhap gia tri x(nhap trung se dung): ");scanf("%d",&x);
    while(KTtrung(l,x)==-1){
        insertTail(l,x);
        printf("\nnhap gia tri x(nhap trung se dung): ");scanf("%d",&x);
    }
}
int tinhTong(LIST l){
    int t=0;
    for(NODE *i=l.phead; i!= NULL; i=i->pnext){
        t+=i->data;
    }
    return t;
}
int timMax(LIST l){
    int max =0;
    for(NODE *i=l.phead; i!=NULL; i=i->pnext){
        if(i->data>max){
            max = i->data;
        }
    }
    return max;
}
int demSL(LIST l){
    int dem=0;
    for(NODE *i=l.phead; i!=NULL; i=i->pnext){
        dem++;
    }
    return dem;
}
void tachDs(LIST l,LIST &n,LIST &m,int x){
    for(NODE *p=l.phead;p!=NULL;p=p->pnext){
        if(p->data > x){
            insertTail(n,p->data);
        }else if(p->data < x){
            insertTail(m,p->data);
        }

    }
}
void menu(){
    printf("\n======================================\n");
    printf("\n1. tao danh sach");
    printf("\n2. tinh tong gia tri cac phan tu");
    printf("\n3. Tim max");
    printf("\n4. Dem so luong phan tu");
    printf("\n5. them cuoi");
    printf("\n6. xoa dau");
    printf("\n7. xoa cuoi");
    printf("\n8. so luong phan tu trung voi x");
    printf("\n9. tao danh sach khong trung gia tri");
    printf("\n10. tach thanh 2 danh sach");
    printf("\n11. xuat danh sach");
    printf("\n======================================\n");
}
int main()
{
    LIST l,n,m;
    khoiTaoList(l);
    khoiTaoList(n);
    khoiTaoList(m);
    int chon;
    do{
        menu();
        printf("\nnhap lua chon: ");scanf("%d",&chon);
        switch(chon){
        case 1:{
            createList(l);break;
        }
        case 2:{
            printf("\ntong cac phan tu trong danh sach: %d",tinhTong(l));break;
        }
        case 3:{
            printf("\nphan tu lon nhat trong danh sach: %d",timMax(l));break;
        }
        case 4:{
            printf("\nso luong phan tu trong danh sach: %d phan tu",demSL(l));break;
        }
        case 5:{
            int x;
            printf("\nnhap gia tri them vao cuoi: ");scanf("%d",&x);
            insertTail(l,x);break;
        }
        case 6:{
            xoaDau(l);break;
        }
        case 7:{
            xoaCuoi(l);break;
        }
        case 8:{
            int x;
            printf("\nnhap phan tu can dem: ");scanf("%d",&x);
            printf("\nphan tu %d xuat hien %d lan",x,demTrung(l,x));break;
        }
        case 9:{
            TaoDsKhTrung(l);break;
        }
        case 10:{
            if(l.phead==NULL){
                createList(l);
            }
            int x;
            printf("\nnhap phan tu muon tach: ");scanf("%d",&x);
            tachDs(l,n,m,x);
            printf("\ndanh sach lon hon gia tri nhap");
            xuatList(n);
            printf("\ndanh sach be hon gia tri nhap");
            xuatList(m);
            break;
        }
        case 11:{
            xuatList(l);break;
        }
        }
    }while(chon<12);
    return 0;
}
