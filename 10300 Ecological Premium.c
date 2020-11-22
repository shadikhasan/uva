#include<stdio.h>
int main()
{
    int t,n;
    int a[3];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int sum = 0;
        while(n--)
        {
            scanf("%d %d %d",&a[0],&a[1],&a[2]);

            sum += a[0] * a[2];
        }
        printf("%d\n",sum);
    }

    return 0;
}
