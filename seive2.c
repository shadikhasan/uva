#include<stdio.h>
int a[500];
void seive()
{
    int n = 500;
    int i,j;

    for(i = 2; i < n; i++)
    {
        a[i] = 1;
    }

    for(i = 2; i * i <= n; i++)
    {
        if(a[i] == 1)
        {
            for(j = 2; i * j <= n; j++)
            {
                a[i * j] = 0;
            }
        }
    }
}
int primeit(int n)
{
    if(n < 2) return 0;

    return a[n];
}
int main()
{
    seive();
    int n;
    scanf("%d",&n);

    if(primeit(n) == 1)
        printf("prime\n");
    else
        printf("not prime\n");

    return 0;
}
