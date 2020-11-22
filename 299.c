#include<stdio.h>
int main()
{
    int t,n;
    int i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];

        for(i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }

        int temp;
        int c = 0;
        for(i = 0; i < n - 1; i++)
        {
            for(j = i + 1; j < n; j++)
            {
                if(a[i] > a[j])
                {
                    c++;
                }
            }
        }

       printf("Optimal train swapping takes %d swaps.\n",c);
    }

    return 0;
}
