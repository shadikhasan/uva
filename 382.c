#include<stdio.h>
int sod(int n)
{
    int s = 0,i;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            s += i;
        }
    }
    return s;
}
int main()
{
    int n;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        break;

        if(sod(n) == n)printf("%5d  PERFECT\n",n);
        else if(sod(n) > n)printf("%5d  ABUNDANT\n",n);
        else if(sod(n) < n)printf("%5d  DEFICIENT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
