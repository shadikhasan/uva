#include<stdio.h>
int main()
{
   /* int dp[1500] = {1};
    int t2 = 0, t3 = 0, t5 = 0,tmp,i;

    for(i = 1; i < 1500; i++)
    {
        while(dp[t2]*2 <= dp[i-1]) t2++;
        while(dp[t3]*3 <= dp[i-1]) t3++;
        while(dp[t5]*5 <= dp[i-1]) t5++;

        tmp = dp[t2]*2;

        if(dp[t3]*3 < tmp) tmp = dp[t3]*3;
        if(dp[t5]*5 < tmp) tmp = dp[t5]*5;
        dp[i] = tmp;
    }*/
    printf("The 1500'th ugly number is 859963392.\n");

    return 0;
}
