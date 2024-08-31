#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    float data;
    Node *pnext;
};
typedef struct Stack{
    Node *top;
};
Node *getNode(float x){
    Node *p=new Node;
    p->data = x;
    p->pnext=NULL;
    return p;
}
void khoitaostack(Stack &s){
    s.top=NULL;
}
int empty(Stack s){
    if(s.top==NULL) return 1;
    else return 0;
}
void push(Stack &s,float x){
    Node *p=getNode(x);
    if(s.top==NULL){
        s.top=p;
    }
    else{
        p->pnext=s.top;
        s.top=p;
    }
}
float pop(Stack &s){
    float x;
    if(!empty(s)){
        Node *p=s.top;
        s.top=p->pnext;
        x =p->data;
        delete p;
    }
    return x;
}
int latoantu(char tu[]){
    char t=tu[0];
    if((t=='+') || (t=='-') || (t=='*') || (t=='/')){
        return 1;
    }else return 0;
}
float tinhtoan(float toanhang1, float toanhang2, char toantu){
    float kq;
    if(toantu = '+'){
        kq=toanhang1 + toanhang2;
    }else if(toantu = '-'){
        kq=toanhang1 -toanhang2;
    }else if(toantu = '*'){
        kq =toanhang1 * toanhang2;
    }else{
        kq=toanhang1 / toanhang2;
    }
    return kq;
}
float tinhbieuthuc(Stack &s,char bieuthuc[]){
    float kq;
    char *p=strtok(bieuthuc," ");

    while(p!='\0'){
        char toantu=p[0];
        if(latoantu(p)==1){

            float sohang1 = pop(s);
            float sohang2 = pop(s);
            float kq = tinhtoan(sohang1,sohang2,toantu);
            push(s,kq);
        }else{
            float toanhang = atof(p);
            push(s,toanhang);
        }
        p=strtok(NULL," ");
    }
    return pop(s);
}
int main()
{
    Stack s;
    khoitaostack(s);
    char bieuthuc[100];
    printf("\nnhap bieu thuc: ");fflush(stdin);gets(bieuthuc);
    float x=tinhbieuthuc(s,bieuthuc);

   printf("%f",x);





    return 0;
}
