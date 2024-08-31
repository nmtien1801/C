#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    do
    {
        printf("\nnhap vao 1 so nguyen :");scanf("%d",&x);
        if(x<0||x>99999) printf("\nnhap so khong qua 5 chu so");
    }while(x<0||x>99999);
    int donvi,chuc,tram,ngan ,chucngan;
    donvi=x%10;
    x/=10;
    chuc=x%10;
    x/=10;
    tram=x%10;
    x/=10;
    ngan=x%10;
    x/=10;
    chucngan=x%10;
    x/=10;

    switch(chucngan)
     {
        case 1:printf("muoi ");break;
        case 2:printf("hai muoi ");break;
        case 3:printf("ba muoi ");break;
        case 4:printf("bon muoi ");break;
        case 5:printf("nam muoi ");break;
        case 6:printf("sau muoi ");break;
        case 7:printf("bay muoi ");break;
        case 8:printf("tam muoi ");break;
        case 9:printf("chin muoi ");break;
    }
      switch(ngan)
    {
        case 1:printf("mot ngan ");break;
        case 2:printf("hai ngan ");break;
        case 3:printf("ba ngan ");break;
        case 4:printf("bon ngan ");break;
        case 5:printf("nam ngan ");break;
        case 6:printf("sau ngan ");break;
        case 7:printf("bay ngan ");break;
        case 8:printf("tam ngan ");break;
        case 9:printf("chin ngan ");break;
    }
     switch(tram)
    {
        case 1:printf("mot tram ");break;
        case 2:printf("hai tram ");break;
        case 3:printf("ba tram ");break;
        case 4:printf("bon tram ");break;
        case 5:printf("nam tram ");break;
        case 6:printf("sau tram ");break;
        case 7:printf("bay tram ");break;
        case 8:printf("tam tram ");break;
        case 9:printf("chin tram ");break;
    }
    switch(chuc)
    {
        case 1:printf("muoi ");break;
        case 2:printf("hai muoi ");break;
        case 3:printf("ba muoi ");break;
        case 4:printf("bon muoi ");break;
        case 5:printf("nam muoi ");break;
        case 6:printf("sau muoi ");break;
        case 7:printf("bay muoi ");break;
        case 8:printf("tam muoi");break;
        case 9:printf("chin muoi");break;
    }
     switch(donvi)
    {
        case 1:printf("mot ");break;
        case 2:printf("hai ");break;
        case 3:printf("ba ");break;
        case 4:printf("bon ");break;
        case 5:printf("nam ");break;
        case 6:printf("sau ");break;
        case 7:printf("bay ");break;
        case 8:printf("tam ");break;
        case 9:printf("chin ");break;
    }

    return 0;
}
