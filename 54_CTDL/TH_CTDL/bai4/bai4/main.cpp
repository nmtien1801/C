#include<stdio.h>
struct Node{
	float heSo;
	int soMu;
	Node *link;
};
struct List{
	Node *first,*last;
};
void init(List &l);
Node *GetNode (float heSo, int soMu);
void AddLast(List &l, Node *new_ele);
void InsertLast(List &l, float heSo, int soMu);
void NhapDaThuc(List &l);
void XuatDanhSach(List l);
void CongDaThuc(List d1,List d2,List &d3 );
void TruDaThuc(List d1,List d2,List &d3 );
void nhanDaThuc(List d1,List d2,List &d3 );

int main(){
	List d1,d2,d3;
	init(d1);
	init(d2);
    init(d3);
	NhapDaThuc(d1);

	NhapDaThuc(d2);
	printf("Danh sach bieu dien da thuc ");
	XuatDanhSach(d1);
	XuatDanhSach(d2);
	CongDaThuc(d1,d2,d3);
	printf("\n==================================Danh sach bieu dien da thuc tong======================================");
	XuatDanhSach(d3);

	TruDaThuc(d1,d2,d3);
	printf("\n==================================Hieu Danh sach da thuc 1 va da thuc 2======================================");
	XuatDanhSach(d3);

	nhanDaThuc(d1,d2,d3);
	printf("\n==================================Tich Danh sach da thuc 1 va da thuc 2======================================");
	XuatDanhSach(d3);

	return 0;
}
void init(List &l){
	l.first=l.last=NULL;
}
Node *GetNode(float heSo, int soMu){
	Node *p;
	p= new Node;
	if(p==NULL)
		return NULL;
	p->heSo=heSo;
	p->soMu=soMu;
	p->link=NULL;
	return p;
}
void AddLast(List &l, Node *new_ele){
	if(l.first==NULL)
		l.first=l.last=new_ele;
	else{
		l.last->link=new_ele;
		l.last=new_ele;
	}
}
void InsertLast(List &l, float heSo, int soMu){
	Node *new_ele=GetNode(heSo, soMu);
	if(new_ele==NULL)
		return;
	AddLast(l,new_ele);
}
void NhapDaThuc(List &l){
	float heSo;
	int n;
	printf("\nnhap bac cua da thuc: ");scanf("%d",&n);
	for(int i=n;i>=0;i--){
        printf("\nnhap he so cho mu %d ",i);scanf("%f",&heSo);
        InsertLast(l,heSo,i);
	}
}
void XuatDanhSach(List l){
	Node *p;
	p=l.first;
	printf("\n");
	while(p!=NULL){
        if(p!=l.first)
            if(p->heSo>0)
                printf("+ ");
	    if(p->soMu==0){
            if(p->heSo!=0)
                printf("%.0f ",p->heSo);
	    }
	    else if(p->soMu==1&&p->heSo!=0)
                printf("%.0fx ",p->heSo);
            else if(p->heSo!=0)
                printf("%.0fx^%d ",p->heSo,p->soMu);

		p=p->link;

	}
}
void CongDaThuc(List d1,List d2,List &d3 )
{
	init(d3);
	Node *p=d1.first, *q=d2.first;
	float tongHeSo;
	while(p&&q){
		if(p->soMu==q->soMu)
		{
			tongHeSo=p->heSo+q->heSo;
			if(tongHeSo!=0){
                InsertLast(d3,tongHeSo,p->soMu);
            }
			p=p->link;
			q=q->link;
		}
		else{
			if(p->soMu > q->soMu)
			{
				InsertLast (d3,p->heSo,p->soMu);
				p=p->link;
			}
			else
			{
				if(p->soMu < q->soMu)
				{
				InsertLast (d3,q->heSo,q->soMu);
				q=q->link;
				}
			}
		}
	}
		while(q)
		{
			InsertLast(d3,q->heSo,q->soMu);
			q=q->link;
		}
		while(p)
		{
			InsertLast(d3,p->heSo,p->soMu);
			p=p->link;
		}

}
void TruDaThuc(List d1,List d2,List &d3 )
{
	init(d3);
	Node *p=d1.first, *q=d2.first;
	float hieuHeSo;
	while(p&&q){
		if(p->soMu == q->soMu){
            hieuHeSo=p->heSo-q->heSo;
            if(hieuHeSo!=0){
                InsertLast(d3,hieuHeSo,p->soMu);
            }
            p=p->link;
            q=q->link;
		}else{
            if(p->soMu > q->soMu)
			{
				InsertLast (d3,-p->heSo,p->soMu);
				p=p->link;
			}
			else
			{
				if(p->soMu < q->soMu)
				{
				InsertLast (d3,-q->heSo,q->soMu);
				q=q->link;
				}
			}
		}
	}
		while(q)
		{
			InsertLast(d3,-q->heSo,q->soMu);
			q=q->link;
		}
		while(p)
		{
			InsertLast(d3,-p->heSo,p->soMu);
			p=p->link;
		}

}
void nhanDaThuc(List d1,List d2,List &d3 )
{
	init(d3);

	float tHeSo=1;
	int sMu=0;
	for(Node *p=d1.first;p!=NULL;p=p->link){
        for(Node *q=d2.first;q!=NULL;q=q->link){
            tHeSo=p->heSo*q->heSo;
            sMu=p->soMu+q->soMu;
            InsertLast(d3,tHeSo,sMu);
        }
	}
}
