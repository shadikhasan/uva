#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    int a[3001], b[3001];
    while(scanf("%d",&n) == 1)
    {
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
            if(b[i] != i + 1) test++;
        }

        if(test == 0)
        {
            printf("Jolly\n");
        }
        else
            printf("Not jolly\n");

    }

    return 0;
}
