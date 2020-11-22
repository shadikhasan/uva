#include<stdio.h>
int main()
{
    int n,k;
    while(scanf("%d %d",&n,&k) != EOF)
    {
        int s = n;
        while(s != 0)
        {
            s /= k;
            n += s;
        }
        printf("%d\n",n);
    }
}
