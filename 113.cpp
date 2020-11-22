#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n,p;

    while(scanf("%lf\n%lf",&n,&p) != EOF)
    {
        double x = 1.0 / n;

        double k = pow(p , x);

        cout << k << endl;
    }

    return 0;
}
