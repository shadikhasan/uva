#include<stdio.h>
int main()
{
    int a,b,t;
    int i,j,k;
    scanf("%d",&t);
    for(i = 0; i < t; i++)
    {
        k = 0;
        scanf("%d\n%d",&a,&b);
        for(j = a; j <= b; j++)
        {
            if(j % 2 != 0)
            {
                k = k + j;
            }

        }
        printf("Case %d: %d\n",i+1,k);

    }
    return 0;
}
