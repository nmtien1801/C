#include <stdio.h>

int main() {
   char s[100] ;
   fflush(stdin); gets(s);
   int i = 0;
   int demcs = 0;
   int demcc = 0;
    int khac=0;
   while(s[i] != '\0') {
      if(s[i] >= '0'&&s[i]<='9'){
         demcs++;
      }
      else if(s[i]>='a'&&s[i]<='z'){
         demcc++;
      }
      else{khac++;}
      i++;
   }

   printf("Chuoi '%s' co chua: %d chu so va %d chu cai va %d ki tu khac", s,demcs,demcc,khac);

   return 0;
}
