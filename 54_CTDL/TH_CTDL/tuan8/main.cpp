#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Sinhvien{
    char ma[8];
    char ht[20];
    double diem;
};
typedef struct Node{
    Sinhvien data;
    Node *pleft;
    Node *pright;
}* Tree;
Node *getNode(Sinhvien data){
    Node *p=new Node;
    if(p==NULL){
        return NULL;
    }
    p->pleft = NULL;
    p->pright = NULL;
    p->data = data;
    return p;
}
void themNodeVaoCay(Tree &t, Node *p){
    if(t==NULL){
        t=p;
    }
    else{
        if(strcmp(p->data.ma,t->data.ma)<0) themNodeVaoCay(t->pleft,p);
        else if(strcmp(p->data.ma,t->data.ma)>0) themNodeVaoCay(t->pright,p);
        else return;
    }
}
int nhap1(Sinhvien &sv){
    printf("\nnhap ma sinh vien [stop = -1]: ");fflush(stdin);gets(sv.ma);
    if(strcmp(sv.ma,"-1")==0)return -1;
    printf("\nnhap ho ten sinh vien: ");fflush(stdin);gets(sv.ht);
    printf("\nnhap diem: ");scanf("%lf",&sv.diem);
    return 1;
}
void xuat1(Sinhvien sv){
    printf("\n\nma sinh vien: ");puts(sv.ma);
    printf("ho ten sinh vien: ");puts(sv.ht);
    printf("diem: %lf",sv.diem);
}
int taocay(Tree &t){
    Sinhvien x;
    int n = 0;
    int dung = nhap1(x);
    while(dung!=-1){
        Node *p = getNode(x);
        themNodeVaoCay(t,p);
        n++;
        dung = nhap1(x);
    }
    return n;
}

int xuatLNR(Tree t){
    int n=0;
    if(t!=NULL){
        if(t->pleft != NULL) xuatLNR(t->pleft);
        xuat1(t->data); n++;
        if(t->pright != NULL) xuatLNR(t->pright);
    }
    return n;
}
void xuatNodeBacK(Tree &t,int k){
    if(t!=NULL){
        if(k==0){
            xuat1(t->data);
        }else{
            xuatNodeBacK(t->pleft,k-1);
            xuatNodeBacK(t->pright,k-1);
        }
    }
}
Node* timNode(Tree &t, char ma[]){
    if(t==NULL){
        return 0;
    }
    if(strcmp(ma,t->data.ma)<0){
        return timNode(t->pleft,ma);
    }
    if(strcmp(ma,t->data.ma)>0){
        return timNode(t->pright,ma);
    }
    return t;
}
void timNodeBe(Tree &p, Tree &q){
    if(q->pleft != NULL){
        timNodeBe(p, q->pleft);
    }else{
        p->data = q->data;
        p = q;
        q = q->pright;
    }
}
void DeleteNode(Tree &root, char X[]){
    if(root== NULL){
        return;
    }
    if(strcmp(root->data.ma , X)>0){
        return DeleteNode(root->pleft, X);
    }
    if (strcmp(root->data.ma , X)<0){
        return DeleteNode(root->pright, X);
    }
    Node* p = root;
    if(root->pleft == NULL){
        root = root->pright;
    }else if(root->pright == NULL){
        root = root->pleft;
    }else{
        timNodeBe (p, root->pright);
    }
    delete p;
}
void sua(Tree &t,char ma[]){
    Node *p= timNode(t,ma);
    printf("\nthong tin truoc khi sua: ");
    xuat1(p->data);
    printf("\n\nsua ho ten sinh vien"); fflush(stdin);gets(p->data.ht);
    printf("\nsua diem"); scanf("%lf",&p->data.diem);

}
int heigh(Tree t){
    if(t==NULL) return 0;
    else{
        int HL = heigh(t->pleft);
        int HR = heigh(t->pright);
        return 1 + ((HL < HR)? HR:HL);
    }
}
double tongDiemNodeLa(Tree t){
    if(t==NULL) return 0;
    else{
        if(t->pright == NULL && t->pleft == NULL){
            return t->data.diem ;
        }
        else{
            return tongDiemNodeLa(t->pleft)+tongDiemNodeLa(t->pright);
        }
    }
}
double tongDiemNode1con(Tree t){
    if(t==NULL)return 0;
    else{
        if((t->pleft == NULL && t->pright !=NULL) || (t->pleft!= NULL && t->pright == NULL)){
            return t->data.diem + tongDiemNode1con(t->pleft)+tongDiemNode1con(t->pright);
        }
        else{
            return tongDiemNode1con(t->pleft)+tongDiemNode1con(t->pright);
        }
    }
}
double tongNode2con(Tree t){
    if(t==NULL) return 0;
    else{
        if(t->pleft !=NULL && t->pright !=NULL){
            return t->data.diem + tongNode2con(t->pleft)+tongNode2con(t->pright);
        }
        else{
            return tongNode2con(t->pleft)+tongNode2con(t->pright);
        }
    }
}
int dem(Tree &t){
    if(t==NULL) return 0;
    else{
        if(t->pleft == NULL && t->pright==NULL){
            return 1;
        }else{
            return 1 + dem(t->pleft) + dem(t->pright);
        }
    }
}

void ghiFile(Sinhvien x[]){
    FILE *f;
    f=fopen("D:/a.txt","wb");
    int n;printf("\nnhap n: ");scanf("%d",&n);
    for(int i=0;i<n;i++){
        nhap1(x[i]);
    }
    fwrite(x,sizeof(Sinhvien),n,f);
    fclose(f);
}
void docFile(Tree &t){
    FILE *f;
    f=fopen("D:/a.txt","rb");

    fseek(f,0,SEEK_END);
    int n= ftell(f)/sizeof(Sinhvien);
    rewind(f);

    Sinhvien x;
    for(int i=0;i<n;i++){
        fread(&x,sizeof(Sinhvien),1,f);
        Node * p = getNode(x);
        themNodeVaoCay(t,p);
    }

    fclose(f);
}
int main()
{
    Tree t = NULL;

    taocay1(t);
    printf("\nxuat LNR: ");
    xuatLNR(t);
//
//    printf("\n===================dem node tren cay======================\n");
//    printf("\nso node tren cay: %d",dem(t));
//
//    printf("\n===================tong diem tren node la======================\n");
//    printf("\ntong diem node la: %lf",tongDiemNodeLa(t));
//
//    printf("\n===================tong diem tren node 2 con======================\n");
//    printf("\ntong diem node co 2 con: %lf",tongNode2con(t));
//
//    printf("\n===================tong diem tren node 1 con======================\n");
//    printf("\ntong diem node co 1 con: %lf",tongDiemNode1con(t));

//    printf("\n===================xoa====================\n");
//    char ma[10];
//    printf("\nnhap ma can xoa: ");fflush(stdin);gets(ma);
//    DeleteNode(t,ma);
//    xuatLNR(t);
//
//    printf("\n===================tim cay==================\n");
//    char ma[10];
//    printf("\nnhap ma can tim: ");fflush(stdin);gets(ma);
//    Node *p= timNode(t,ma);
//    xuat1(p->data);
//
//    printf("\n=====================sua=================\n");
//    char ma[10];
//    printf("\nnhap ma can sua: ");fflush(stdin);gets(ma);
//    sua(t,ma);
//    xuatLNR(t);
//
//    printf("\n===================xuat theo bac======================\n");
//    int k;
//    printf("\nnhap bac can xuat: ");scanf("%d",&k);
//    xuatNodeBacK(t,k);
//
//    printf("\n==================ghi file=======================\n");
//    Sinhvien x[100];
//    ghiFile(x);
//
//    printf("\n==================xuat file=======================\n");
//    docFile(t);
//    xuatLNR(t);
    return 0;
}




