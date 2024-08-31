#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gia=12,von=5.1,lai=1;
    int dem=0;
    while(von<gia)
    {
        lai=0.009*von;
        von+=lai;
        dem++;
    }
    printf("\nso thang can de mua duoc la: %d",dem);
    return 0;
}
