#include<bits/stdc++.h>

using namespace std;

int main()
{
    int DP[7500] = {0};
    int Coin[5] = {1, 5, 10, 25, 50};
    int i, j, n;
    DP[0] = 1;

    for(i = 0; i < 5; i++)
    {
        for(j = Coin[i]; j < 7500; j++)
            DP[j] += DP[j - Coin[i]];
    }
    while(scanf("%d", &n) == 1)
    {
        cout << DP[n] << endl;
    }
    return 0;
}
