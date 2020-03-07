#include <stdio.h>
#include <stdlib.h>
int suma(int *niz, int n)
{
    if(n==0)
        return 0;
    else
        return niz[n-1] + suma(niz,n-1);
}

int main()
{
    int n,*niz,i;
    do{
        printf("n=");
        scanf("%d",&n);
    }while(n<1);
    niz=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("%d. broj: ",i+1);
        scanf("%d",&niz[i]);
    }
    printf("Suma brojeva je:%d",suma(niz,n));
    free(niz);
    return 0;
}
