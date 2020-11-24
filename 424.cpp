/******************************************************************************

                       EKRAMUL ISLAM SHADIK
             Information & Communication Engineering
                University of Rajshahi,Bangladesh
*******************************************************************************/
/*424 - Integer Inquiry*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define PI 3.141592653589793

int main()
{
    string s;
    int sum[101] = { 0 }, temp[101] = { 0 };
    while(1)
    {
        cin >> s;

        if(s == "0")break;

        //operation
        int carry = 0;
        int l = s.length();
        int j = l - 1;
        for(int i = 0; i < l; i++, j--)
        {
            temp[i] = s[j] - 48; // converting string to integer & saved to temp array
        }
        for(int i = 0; i < l; i++)
        {
            int n = sum[i] + temp[i];
            sum[i] = n % 10;

            if(n > 9)
            {
                sum[i + 1]++; //because carry can be at most one
            }
        }
    }

    int i = 101;
    while(!sum[--i]);
    for(; i >= 0; i--)
    {
        cout << sum[i];
    }
    cout << endl;

    return 0;
}
