#include<bits/stdc++.h>
using namespace std;

int main()
{
    string wave[100]={"1","22","333","4444","55555","666666","7777777","88888888","999999999"};
    int i,t,j,a,b;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d",&a,&b);

        while(b--)
        {
            for(j=0;j<a;j++)
            {
                cout<<wave[j]<<endl;
            }

            for(j=a-2;j>=0;j--)
            {
                cout<<wave[j]<<endl;
            }

            if(b || t)
            {
            printf("\n");
            }

        }

    }

    return 0;
}
