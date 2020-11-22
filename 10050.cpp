#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, P, p, t;
    cin >> t;
    while(t--)
    {
       cin >> n;
       int a[3651]={0};
       int temp ,result, i;
       cin >> P;
       for(i = 1; i <= P; i++)
       {
           cin >> p;
           temp = p;
           while(p <= n)
           {
               a[p] = 1;
               p += temp;
           }
       }
       result = 0;
       for(i = 1; i <= n; i++)
       {
           if(a[i] == 1 && i % 7 != 0 && i % 7 != 6)
            result++;
       }

       cout << result << endl;

    }
    return 0;
}
