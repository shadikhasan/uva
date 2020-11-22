#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, num[1001], i, j, flip;
    while(scanf("%d", &n) != EOF)
    {
        for(i = 0; i < n; i++)
        {
            cin >> num[i];
        }

        //bubble sort
        flip = 0;
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n - i - 1; j++)
            {
                if(num[j] > num[j + 1])
                {
                    flip++;
                    swap(num[j], num[j + 1]);

                }
            }
        }
        cout << "Minimum exchange operations : " << flip << endl;

    }
    return 0;
}
