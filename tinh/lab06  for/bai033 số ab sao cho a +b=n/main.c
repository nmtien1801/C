#include<stdio.h>
int main() {
                        //tim so co 2 chu so ma tong cac chu so bang so nhap vao

  int n;
  scanf("%d", &n);
  for(int a = 1; a <= 9; a++)
  for(int b = 0; b <= 9; b++)
  if(a + b == n) printf("%d%d\n", a,b);
  return 0;
}

