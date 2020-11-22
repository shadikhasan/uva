#include<stdio.h>
int main()
{
    long long int a, f;
    long long int i, j;
    scanf("%lld\n%lld",&a,&f);
    while(f--)
    {
        for(i = 1; i <= a; i++)
        {
            for(j = 1; j <= i; j++)
            {
                printf("%lld",i);
            }
            printf("\n");
        }
        for(i = i - 1; i >= 1; i--)
        {
            for(j = i - 1; j >= 1; j--)
            {
                printf("%lld",i-1);
            }
            if(i > 1)printf("\n");
        }
        if(f != 0)printf("\n");
    }
    return 0;
}
