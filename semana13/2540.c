#include <stdio.h>
void ordenar(int[], int);
int main(int argc, char const *argv[])
{
   int N;
   while (scanf("%d",&N)!=EOF)
   {
    int entrada, contador = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d",&entrada);
        if(entrada == 1)  contador++;
    } 
    if(((double)contador/N) >= 2.0/3) printf("impeachment\n");
    else printf("acusacao arquivada\n");
   }
   
}

