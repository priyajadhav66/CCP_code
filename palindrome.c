
#include<stdio.h>
int ispalindrome(char str[])
{
    int i,j=strlen(str)-1;
    for(i=0;i<=j;i++,j--)
        if(str[i]!=str[j])
        return 0;
    return 1;
}
main()
{
    char str[100];
    printf("enter string\n");
    scanf("%s",str);
    if(ispalindrome(str))
        printf("PALINDROME");
    else
        printf("NOT PALINDROME");
}
