#include<stdio.h>
int main()
{
    int n,i,sum,c,x,testcase=0;
    int a[50];
    while(scanf("%d",&n) != EOF)
    {
        if(n == 0)break;

        testcase++;
        sum = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);

            sum += a[i];
        }

        x = sum / n;

        c = 0;
        for(i = 0; i < n; i++)
        {
            if(a[i] > x)
                c += a[i] - x;
        }

        printf("Set #%d\nThe minimum number of moves is %d.\n\n",testcase,c);
    }
    return 0;

}
