#include<cstdio>
#include <bits/stdc++.h>
#define N 20000001
typedef long long ll;
int main()
{
    static ll ans[N] = {};
    for(int i = 2; i < N; i++)
    {
        for(int j = i; j < N; j += i)
        {
            ans[j] += i;
            //printf("%d",ans[j]);
        }
        ans[i] += ans[i - 1] + 1;
        //printf("%d",ans[i]);
    }
    int n;
    while(1)
    {
        scanf("%d", &n);
        if(n == 0)break;

        printf("%lld\n", ans[n]);
    }
    return 0;
}
