#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    int i,j;
    while(scanf(" %[^\n]", s) != EOF)
    {
        int mahi = - 1;
        int l = strlen(s);
        for(i = 0; i < l; i++)
        {
            if(s[i] == ' ')
            {
                for(j = i - 1; j > mahi; j--)
                {
                    printf("%c",s[j]);
                }
                printf(" ");
                mahi = i;
            }
        }
        for(i = l - 1; i > mahi; i--)
        {
            printf("%c",s[i]);
        }
        printf("\n");
    }

    return 0;
}
