#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    char *token;
    while(scanf(" %[^\n]", s) != EOF)
    {
        token = strtok(s, " ");

        while(token != NULL)
        {
            printf("%s",strrev(token));

            token = strtok(NULL, " ");
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
