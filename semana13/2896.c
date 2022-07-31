#include <stdio.h>

int main(int argc, char const *argv[])
{
    int casosTeste, garrafasCompradas,garrafasTroca;
    scanf("%d",&casosTeste);
    for(int i =0; i<casosTeste;i++){
        scanf("%d %d", &garrafasCompradas,&garrafasTroca);
        int garrafasVazias = garrafasCompradas/garrafasTroca;
        int garrafasCheias = garrafasCompradas%garrafasTroca;
        int garrafasProxDia = garrafasVazias + garrafasCheias;
        printf("%d\n",garrafasProxDia );

    }
    return 0;
}
