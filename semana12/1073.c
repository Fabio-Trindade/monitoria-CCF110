#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N,i;
    scanf("%d",&N);
    for(i=2;i<=N;i+=2) printf("%d^%d = %d\n",i,2,i*i);
    return 0;
}
