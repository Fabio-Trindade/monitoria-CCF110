#include <stdio.h>
void ordenar(int[], int);
int main(int argc, char const *argv[])
{
    int N, Q, entrada;
    while (scanf("%d %d", &N, &Q)!=EOF)
    {
        int vetorN[N];
        for (int i = 0; i < N; i++)
            scanf("%d", &vetorN[i]);
        ordenar(vetorN, N);
        for (int i = 0; i < Q; i++)
        {
            scanf("%d", &entrada);
            printf("%d\n", vetorN[entrada - 1]);
        }
    }
    return 0;
}

void ordenar(int vetor[], int tamVetor)
{
    for (int i = 0; i < tamVetor; i++)
    {
        for (int j = 0; j < tamVetor - 1; j++)
        {
            if (vetor[j] < vetor[j + 1])
            {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}