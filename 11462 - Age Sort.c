#include<stdio.h>
int main()
{
    int t,i,j,k,c;
    int age[10000],temp;
    while(scanf("%d",&t) == 1)
    {
        if(t == 0)
            break;
        for(i = 0; i < t; i++)
        {
            scanf("%d",&age[i]);
        }
        for(j = 0; j < t - 1; j++)
        {
            for(k = 0; k < t - 1; k++)

                if(age[k] > age[k+1])
                {
                    temp = age[k];
                    age[k] = age[k+1];
                    age[k+1] = temp;
                }
        }
        for(c = 0; c < t; c++)
        {
            printf("%d ",age[c]);
        }
        printf("\n");
    }
    return 0;
}
