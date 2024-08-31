#include <stdio.h>
#include <conio.h>
int Fibonacci(int n)
{

    if (n == 0 || n == 1) {
        return n;
    } else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int main()
{
    int n;
    do{
    printf("nhap n: ");
    scanf("%d", &n);
    }while(n<0);
    printf("\ntong la: %d",Fibonacci(n));
    return 0;
}
