#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(FILE *fp,char ch[100]);
void Read_file(FILE *fp,char ch[100]);
void coutchar(char ch[]);
int dem1(char ch[],char x);
int kt_trung(char ch[],char x);
void xuatHien(char ch[]);
int main()
{
    FILE *fp;
    char ch[100];

    input(fp,ch);

    Read_file(fp,ch);
    coutchar(ch);
    xuatHien(ch);
    return 0;
}
void input(FILE *fp,char ch[100]){
    fp=fopen("D:/INPUT.txt","w");
    if(fp==NULL){
        printf("\nfile khong ton tai");
        exit(0);
    }

    printf("\nnhap vao tap tin: ");fflush(stdin);
    gets(ch);
    fputs(ch,fp);

    fclose(fp);
}
void Read_file(FILE *fp,char ch[100]){
     fp=fopen("D:/INPUT.txt","r");
    if(fp==NULL){
        printf("\nfile khong ton tai");
        exit(0);
    }

    fgets(ch,100,fp);
    puts(ch);
    fclose(fp);
}
void coutchar(char ch[]){
    int dem=0;
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]!=' '||ch[i]!='/0'){
            dem++;
        }
    }
    printf("\nkhich thuoc: %d ki tu",dem);
}
int dem1(char ch[],char x){
    int dem=0;
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]==x)dem++;
    }
    return dem;
}
int kt_trung(char ch[],int x){
    for(int i=0;i<x;i++){
        if(ch[i]==ch[x])return 1;
    }
    return 0;
}
void xuatHien(char ch[]){
    for(int i=0;i<strlen(ch);i++){
        if(kt_trung(ch,i)==0){
            printf("\n%c : %d",ch[i],dem1(ch,ch[i]));
        }
    }
}


