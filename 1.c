#include <stdio.h>
int suma_cifara(int b)
{
    if(b/10==0)
        return b;
    else
    {
        return b%10+suma_cifara(b/10);
    }
}

int main()
{
    int b,suma;
    do{
        printf("b=");
        scanf("%d",&b);
    }while(b<1);
    suma=suma_cifara(b);
    printf("%d",suma);
    return 0;
}

