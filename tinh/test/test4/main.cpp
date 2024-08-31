#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void writeFile(char *file);
void readFile(char *file,char ch[]);
void inHoa(char ch[]);
void fileout(char *file,char ch[]);
int main()
{
    char fp[100],fp2[100];
    char ch[100];
    printf("\nnhap ten file: ");
    fflush(stdin);
    gets(fp);

   // writeFile(fp);
    readFile(fp,ch);
    inHoa(ch);
    printf("\nnhap ten file de luu: ");
    fflush(stdin);
    gets(fp2);
    fileout(fp2,ch);
    return 0;
}
void xuatMang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void writeFile(char *file){
    FILE *fp;
    fp=fopen(file,"w");
    if(fp==NULL){
        exit(0);
    }
    char ch[100];
    printf("\nnhap chuoi: ");
    fflush(stdin);
    gets(ch);
    fputs(ch,fp);

    fclose(fp);
}
void readFile(char *file,char ch[]){
    FILE *fp;
    fp=fopen(file,"r");
    if(fp==NULL){
        exit(0);
    }
    int i=0;

    while(!feof(fp)){
        fgets(ch,100,fp);
        puts(ch);
        i++;
    }

    fclose(fp);
}
void inHoa(char ch[]){
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]>='a'&&ch[i]<='z'){
            ch[i]-=32;
        }
    }
}
void fileout(char *file,char ch[]){
    FILE *fp;

    inHoa(ch);

    fp=fopen(file,"w");
    if(fp==NULL){
        exit(0);
    }
    fputs(ch,fp);

    fclose(fp);
}







