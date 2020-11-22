#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) == 1)
    {
        int a[3001];
        int b[n-1],i;
        for(i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i = 0; i < n; i++)
        {
            b[i] = abs(a[i] - a[i + 1]);
        }
        int test = 0;
        sort(b, b + n - 1);
        for(i = 0; i < n - 1; i++)
        {
            if((b[i] >= 1 && b[i] <= n - 1) && (b[i] != b[i+1]) test++;
        }

        if(test == n - 1)
        {
            printf("Jolly\n");
        }
        else
            printf("Not jolly\n");

    }

    return 0;
}
