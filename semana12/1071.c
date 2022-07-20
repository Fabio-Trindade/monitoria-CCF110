#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int X,Y,i,soma=0;
    
    scanf("%d %d",&X,&Y);
    if (X<Y){
        for(i=X+1;i<Y;i++){if (abs(i)%2==1)soma+=i;}
    }
    else for(i=Y+1;i<X;i++) {if (abs(i)%2==1)soma+=i;}
    
    printf("%d\n",soma);
    return 0;
}
