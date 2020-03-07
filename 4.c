#include <stdio.h>
int clan(int n)
{
    if(n<=3)
        return n;
    else
        return clan(n-1)+clan(n-2)+clan(n-3);
}

int main()
{
    int n;
    do{
        printf("n=");
        scanf("%d",&n);
    }while(n<1);
    printf("f%d=%d",n,clan(n));
    return 0;
}
