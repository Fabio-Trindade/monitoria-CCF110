#include <stdio.h>
void ordenar(int[], int);
int main(int argc, char const *argv[])
{
    int N,somaN = 0,somaEntrada = 0,entrada;
    scanf("%d",&N);
    for(int i =1; i < N ;i++) {
        somaN += i;
        scanf("%d",&entrada);
        somaEntrada += entrada;
    }
    somaN += N;
    printf("%d\n",somaN - somaEntrada);
     return 0;
}

