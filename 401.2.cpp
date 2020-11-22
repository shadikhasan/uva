#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
int cmp(char s[])
{

    char s2[1000];

    strcpy(s2, s);
    strrev(s2);

    return strcmp(s, s2);
}
int main()
{
    char s[1000];
    while(scanf("%s",s) != EOF)
    {

        printf("%d\n",cmp(s));


    }
    return 0;
}

