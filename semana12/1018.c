#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N, i;
    int notas[7] = {100,50,20,10,5,2,1} ;
    scanf("%d", &N);
    printf("%d\n",N);
    for(i=0;i<7;i++){
        printf("%d nota(s) de R$ %d,00\n",N/notas[i],notas[i]);
        N %= notas[i];
    }
    return 0;
}
