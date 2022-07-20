#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N,i,num,in=0,out=0; 
    scanf("%d",&N );
    for(i =0;i<N;i++){
        scanf("%d", &num);
        if(num >= 10 && num <=20)  in++;
        else out++;
    }
    printf("%d in\n",in);
    printf("%d out\n",out);

    return 0;
}
