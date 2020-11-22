#include<bits/stdc++.h>

using namespace std;

int main()
{
        int a, c1, c2, c3, ans,deg;
        while(1)
        {
            cin >> a >> c1 >> c2>> c3;
            if(a == 0 && c1 == 0 && c2 == 0 && c3 == 0)
                break;

            deg = 0;
            ///initial to c1
            deg += a > c1 ? (a - c1) * 9 : ((a + 40) - c1) * 9;

            ///c1 to c2
            deg += c2 > c1 ? (c2 - c1) * 9 : ((c2 + 40) - c1) * 9;

            ///c2 to c3
            deg += c2 > c3 ? (c2 - c3) * 9 : ((c2 + 40) - c3)* 9;

            ans = 1080 + deg;

            cout << ans << endl;
        }
        return 0;
}
