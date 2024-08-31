#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(char *f,char ch[]);
void Read_file(char *f,char ch[]);

int main()
{
    char f[100];
    char ch[100];
//    printf("\nghi tep: ");fflush(stdin);
//    gets(f);
    //input(f,ch);

    printf("\ndoc tep: ");fflush(stdin);
    gets(f);
    Read_file(f,ch);
    return 0;
}
void input(char *f,char ch[]){
    FILE *fp;
    fp=fopen(f,"w");
    if(fp==NULL){
        printf("\nfile khong ton tai");
        exit(0);
    }

    printf("\nnhap vao tap tin: ");fflush(stdin);
    gets(ch);
    fputs(ch,fp);

    fclose(fp);
}
void Read_file(char *f,char ch[]){
    FILE *fp;
    fp=fopen(f,"r");
    if(fp==NULL){
        printf("\nfile khong ton tai");
        exit(0);
    }

    fgets(ch,100,fp);
    printf("cac ki tu chu va so:");
    for(int i=0;i<strlen(ch);i++){
        if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='0'&&ch[i]<='9')){
            printf("%c",ch[i]);
        }
    }
    fclose(fp);
}
