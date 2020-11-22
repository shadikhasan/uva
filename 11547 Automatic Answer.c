#include<stdio.h>
int main()
{
    int t;
    int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        n = ((((n * 567) / 9 + 7492) * 235) / 47) - 498;

        if(n < 0)
            n *= -1;


        printf("%d\n",n/10%10);

    }
}
