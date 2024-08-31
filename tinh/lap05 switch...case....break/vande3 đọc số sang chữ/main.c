#include <stdio.h>
#include <stdlib.h>

int main()
{
        int x,sodau,socuoi;

    printf("\nnhap vao so co 2 chu so :");scanf("%d",&x);

    sodau=x/10;
    socuoi=x%10;
    switch(sodau)
    {
        case 1: printf("\nmuoi");break;
        case 2: printf("\nhai muoi");break;
        case 3: printf("\nba muoi");break;
        case 4: printf("\nbon muoi\n");break;
        case 5: printf("\nnam muoi");break;
        case 6: printf("\nsau muoi");break;
        case 7: printf("\nbay muoi");break;
        case 8: printf("\ntam muoi");break;
        case 9: printf("\nchin muoi");break;
        default: printf("\nkhong biet doc");
    }
     switch(socuoi)
    {
        case 1: printf(" mot");break;
        case 2: printf(" hai");break;
        case 3: printf(" ba");break;
        case 4: printf(" bon");break;
        case 5: printf(" nam");break;
        case 6: printf(" sau");break;
        case 7: printf(" bay");break;
        case 8: printf(" tam");break;
        case 9: printf(" chin");break;
        default: printf("\nkhong biet doc");
    }
    return 0;
}
