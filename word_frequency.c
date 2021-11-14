#include<stdio.h>
int cal(char str[],char sub[])
{
    int i,cnt=0,j=0,k=0;
    for(i=0;str[i]!='\0';i++)
    {
       j=i;
       k=0;
       while(str[j]==sub[k]&str[j]!='\0')
       {
           j++;
           k++;
       }
       if(sub[k]=='\0')
        cnt++;

    }
    return cnt;
}
main()
{
    char str[100],sub[100];
    printf("enter string\n");
    gets(str);
    printf("enter substring\n");
    gets(sub);
    printf("frequency of %s : %d\n",sub,cal(str,sub));
}
