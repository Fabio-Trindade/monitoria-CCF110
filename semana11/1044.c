#include <stdio.h>

int main(){
    int A, B, temp;
    scanf("%d  %d",&A,&B);
    if (A < B) {
        temp = A;
        A = B;
        B = temp;
    } 
    if (A%B==0)printf("Sao Multiplos\n");
    else printf("Nao sao Multiplos\n");
   
}