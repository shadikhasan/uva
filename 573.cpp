#include <bits/stdc++.h>

using namespace std;

int main()
{
    double h, u, d, f, H, ff;
    int day;
    while(1)
    {
        cin >> h >> u >> d >> f;
        if(h == 0)
            break;
        day = 0;
        ff = 0.01 * f * u;
        H = h;
        h = 0;
        while(1)
        {

            day++;
            if(u > 0)
                h = h + u;
            u = u - ff;
            if(h > H)
                break;

            h = h - d;
            if(h < 0)
                break;

        }
        if(h >= 0)
        {
            printf("success on day %d\n",day);
        }
        else
        {
            printf("failure on day %d\n",day);
        }

    }
    return 0;
}
