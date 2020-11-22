#include<stdio.h>
int main()
{
    int t,i,n,a[10000];
    int testcase = 0;
    scanf("%d",&t);
    while(t--)
    {
        testcase++;
        scanf("%d",&n);

        for(i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        int max = a[0];
        for(i = 1; i < n; i++)
        {
            if(a[i] > max)
                max = a[i];
        }

        printf("Case %d: %d\n",testcase,max);
    }

    return 0;
}
