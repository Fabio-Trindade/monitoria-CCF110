#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char S[101];
    int cont=0;
    scanf("%s",S);
    int tamanhoString = strlen(S);
    for(int i =0; i < tamanhoString ;i++ )
        if (S[i]=='1') cont+=1;
    if(cont%2==0) S[tamanhoString]='0';
    else S[tamanhoString]='1';
    //Fim de String
    S[tamanhoString+1]='\0';
    printf("%s\n",S);
    

    return 0;
}
