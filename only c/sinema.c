#include <stdio.h>
#include <stdlib.h>

int main() 
    {

    int mısır,kola,su,bilet,total; 

    printf("*************Sinema************\n");
    printf("kaç tane mısır almak istersiniz? :  \n");
    scanf("%d",&mısır);

    printf("kaç tane kola istersiniz: \n");
    scanf("%d",&kola);

    printf("kaç tane su almak istersiniz? : \n");
    scanf("%d",&su);

    printf("kaç tane bilet almak istersiniz? : \n");
    scanf("%d",&bilet);
    total=mısır*2+kola*2+su*1+bilet*8;
    printf("Total fee: %d",total);

    return 0;
    }
