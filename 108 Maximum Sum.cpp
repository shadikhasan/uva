#include <bits/stdc++.h>
using namespace std;

int kadanesAlgo(int a[], int size)
{
    int max_so_far = a[0];
    int cur_max = a[0];
    int i;
    for(i = 1; i < size; i++)
    {
       cur_max = max(a[i], cur_max + a[i]);
       max_so_far = max(max_so_far, cur_max);
    }
    return max_so_far;
}
int main()
{
    int n;
    scanf("%d",&n);
    int M[n][n];
    int COL = n, ROW = n,i,j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&M[i][j]);
        }
    }

    int maxSum = INT_MIN;
    int left, right;
    int temp[ROW], sum = 0;

    for(left = 0; left < COL; left++)
    {
        ///Initialize all elements of temp as zero
        memset(temp, 0, sizeof(temp));

        for(right = left; right < COL; ++right)
        {
            for(i = 0; i < ROW; ++i)
            {
                temp[i] += M[i][right];
            }
            sum = kadanesAlgo(temp, ROW);

            if(sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }
    printf("%d\n",maxSum);

    return 0;
}


