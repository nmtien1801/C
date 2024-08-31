#include <stdio.h>
#include <stdlib.h>

int main(){
     int random[1000],tong = 0;
     for (int i = 0; i < 1000; i++){
      random[i] = rand();
      tong += random[i];
     }
     printf("\n\nGia tri trung binh la: %d\n", tong / 1000);

     for (int i = 0; i < 1000; i++){
        printf("\nrandom[%d] = ", i);
        printf("%d", random[i]);
        if (i % 10 == 0 && i > 0){
        printf("\nPress Enter to continue, CTRL-C to quit.");
        getchar();
        }
     }
 return 0;
}
