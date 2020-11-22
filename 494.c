#include<stdio.h>
#include<string.h>
int main()
{
    int t,count,i;
    char s[10000];
    while(scanf(" %[^\n]",s) != EOF)
    {
        char *token;
        token = strtok(s,"!,;?. ");
        count = 0;
        while(token != NULL)
        {
            if(strlen(token) > 0)
            {
                count++;
            }
            token = strtok(NULL,",!.;? ");
        }
        printf("%d\n",count);
    }

    return 0;

}

