#include <stdio.h>

main(){
    int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for (int i = 0; i < 10; i++){
        printf("\a[%d] = %d ", i, a[i]);
    }
    return 0;
}
