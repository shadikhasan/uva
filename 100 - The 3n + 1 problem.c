#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b) == 2)
    {
        int i,n,count,max = 0;
        int n1,n2;

        n1 = a;
        n2 = b;
        if(a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        for(i = a; i <= b; i++)
        {
            n = i;
            count = 1;
            while(n != 1)
            {
                if(n % 2 == 0)
                    n = n / 2;
                else
                    n = 3*n + 1;

                count++;
            }
            if(count >= max)
                max = count;
         }

            printf("%d %d %d\n",n1,n2,max);
        }
    return 0;
}
