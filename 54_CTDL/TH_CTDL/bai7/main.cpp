#include <stdio.h>
#include <string.h>

typedef struct Node{
    float data;
    Node *pnext;
};
typedef struct Queue{
    Node *front;
    Node *rear;
};
void khoitaoQueue(Queue &q){
    q.front=NULL;
}
int empty(Queue &q){
    if(q.front==NULL) return 1;
    else return -1;
}
Node *getNode(float data){
    Node *p=new Node;
    p->data=data;
    p->pnext=NULL;
    return p;
}
void enqueue(Queue &q,float x){
    Node *p=getNode(x);
    if(q.front==NULL){
        q.front=q.rear=p;
    }else{
        q.rear->pnext=p;
        q.rear=p;
    }
}
float deQueue(Queue &q){
    if(!empty(q)){
        return -1;
    }else{
        float x;
        Node *p= q.front;
        q.front = p->pnext;
        x=p->data;
        delete p;
        return x;
    }
}
void taoDs(Queue &q){
    float x;
    printf("\nnhap gia tri (-1 de dung): ");scanf("%f",&x);
    while(x!=-1){
        enqueue(q,x);
        printf("\nnhap gia tri (-1 de dung): ");scanf("%f",&x);
    }
}
void xuatDs(Queue q){
    while(empty(q)!=1){
        float k=deQueue(q);
        printf("%.2f  ",k);
    }
}
int main()
{
    Queue q;
    khoitaoQueue(q);
    taoDs(q);
    xuatDs(q);
    return 0;
}
