#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void in_hoa(char a[]);
void xoa(char a[],int vt);
void standard(char s[]);
void xoa_space(char a[]);
void Dem_tu(char a[]);
char TuDaiNhat(char s[]);
void trich_tu(char s[]);
int main()
{
    char a[30];
    int n=strlen(a);
    fflush(stdin);
    printf("\nnhap chuoi: ");
    gets(a);
    in_hoa(a);
    standard(a);
    printf("\nchuoi vua nhap la: "); puts(a);
    Dem_tu(a);

    printf("\ntu dai nhat la: ");

    TuDaiNhat(a);
    trich_tu(a);
    xoa_space(a);
    printf("\nsau khi xoa het khoang trang: "); puts(a);
    return 0;
}
void in_hoa(char a[]){
    tolower(a);
    if(a[0]!=' '&&a[0]>='a'&&a[0]<='z'){
        a[0]-=32;
    }
    for(int i=1;i<strlen(a);i++){
        if(a[i-1]==' '&&a[i]>='a'&&a[i]<='z'){
            a[i]-=32;
        }
        else if(a[i]==' '&&a[i+1]>='a'&&a[i+1]<='z'){
            a[i+1]-=32;
        }
    }
}
void xoa(char a[],int vt){
    int n=strlen(a);
    for(int i=vt+1;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]='\0';
}
void standard(char s[]){
    for(int i=0;i<strlen(s);i++){
        if(s[i]==' '&&s[i+1]==' '){
            xoa(s,i);
            i--;
        }
    }
    if(s[0]==' '){
        xoa(s,0);
    }
    if(s[strlen(s)-1]==' '){
        xoa(s,strlen(s)-1);
    }
}
void xoa_space(char a[]){
    for(int i=0;i<strlen(a);i++){
        if(a[i]==' '){
            xoa(a,i);
            i--;
        }
    }
}
void Dem_tu(char a[]){
    int dem=0;
    if(a[0]!=' '){
        dem++;
    }
    for(int i=0;i<strlen(a);i++){
        if(a[i]==' '&&a[i+1]!=' '){
            dem++;
        }
    }
    printf("\nchuoi vua nhap co %d tu, cac tu day la:\n",dem);
    for(int i=0;i<strlen(a);i++){
        if(a[i-1]==' '){
            printf("\n");
        }
        printf("%c",a[i]);
    }
}

char TuDaiNhat(char s[]) {
    int i=0,do_dai_max=0,vt_max=0,len=strlen(s),de=0,do_dai=0;
    while((s[i]!=' ') && (s[i]!='\0')) {
        do_dai++;
        i++;
    }
    if(do_dai>do_dai_max) {
        do_dai_max=do_dai;
        vt_max=0;
    }
    for(i=do_dai_max; i<len; i++) {
        if((s[i]==' ') && (s[i+1]!=' ')) {
            int j=i+1;
            while((s[j]!=' ') && (s[j]!='\0')) {
                de++;
                j++;
            }
            if(de>do_dai_max) {
                do_dai_max=de;
                vt_max=i+1;
            }

        }
    }
    for(int k=vt_max; k<vt_max+do_dai_max; k++) {
        printf("%c",s[k]);
    }
}

void trich_tu(char s[]){
    int a,b;
    printf("\n\nnhap so ki tu can trich: ");scanf("%d",&b);
    printf("\n%d ki tu dau tien la: ",b);
    for(int i=0;i<b;i++){
        printf("%c",s[i]);
    }
    printf("\n%d ki tu cuoi cung la: ",b);
    for(int i=strlen(s)-b;i<strlen(s);i++){
        printf("%c",s[i]);
    }
    printf("\n\nnhap vi tri can trich: ");scanf("%d",&a);
    for(int k=a;k<=strlen(s)-1;k++){
        printf("%c",s[k]);
    }
}
