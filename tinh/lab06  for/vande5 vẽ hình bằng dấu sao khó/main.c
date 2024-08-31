#include <stdio.h>
#include<math.h>
int main()
{
    int dong,cot;
    scanf("%d%d",&dong,&cot);
   for (int i = 1; i <= dong; i++) {  // dùng loop để đi hết số dòng
		if (i == 1 || i == dong) {  // chỉ in ra nguyên 1 hàng * khi i = 1 và i = dòng
			for (int i = 1; i <= cot; i++) {
				printf(" * ");
			}
		}
		else {
			for (int j = 1; j <= cot; j++) { // ngược lại thì chỉ in * ở vị trí đầu hoặc cuối
				if (j == 1 || j == cot) {
					printf(" * ");
				}
				else printf("   ");
			}
		}
		printf("\n\n");
	}
    return 0;
}

