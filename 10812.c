#include<stdio.h>
int main()
{
    int s,d,x,y,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&s,&d);

        x = (s + d) / 2;
        y = s - x;

        if((s+d)%2==1 || s<d)
        {
            printf("impossible\n");
        }
        else
            printf("%d %d\n",x,y);
    }
    return 0;
}
