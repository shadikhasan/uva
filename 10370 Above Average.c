#include<stdio.h>
int main()
{
    int t,i,n,a[1001];
    int sum,c;
    double avg;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum = 0, c = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            sum += a[i];
        }
        avg = sum / (double)n;
        for(i = 0; i < n; i++)
        {
            if(a[i] > avg)c++;
        }
        printf("%0.3lf%c\n",(100 * c) / (double)n, '%');
    }
    return 0;
}
