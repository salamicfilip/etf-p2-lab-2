#include <stdio.h>
#include <stdlib.h>
void saberi(double *vektor_a, double *vektor_b, double *vektor_rez, int n)
{
    if(n)
        saberi(vektor_a,vektor_b,vektor_rez,n-1);
    printf("%lf\n",vektor_rez[n]=vektor_a[n]+vektor_b[n]);
}

int main()
{
    int n,i;
    double *a,*b,*c;
    do{
        printf("n=");
        scanf("%d",&n);
    }while(n<1);
    a=(double*)calloc(n,sizeof(double));
    b=(double*)calloc(n,sizeof(double));
    c=(double*)calloc(n,sizeof(double));
    printf("Prvi vektor:\n");
    for(i=0;i<n;i++)
    {
        printf("%d. broj: ",i+1);
        scanf("%lf",&a[i]);
    }
    printf("Drugi vektor:\n");
    for(i=0;i<n;i++)
    {
        printf("%d. broj: ",i+1);
        scanf("%lf",&b[i]);
    }
    saberi(a,b,c,n-1);
    free(a);
    free(b);
    free(c);
    return 0;
}
