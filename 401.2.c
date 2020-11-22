#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
int main()
{
    char s[1000];
    while(scanf("%s",s) != EOF)
    {
        char s2[100];
        s2 = strrev(s);

        printf("%d",strcmp(s,s2));


        if(strcmp(s , s2) == 0)printf("yes\n");
        else
            printf("no\n");
    }
}

