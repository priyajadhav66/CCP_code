/* find total occurences of each digit (0-9) using function*/

#include<stdio.h>
main()
{
    int n,a[10];
    for(n=0;n<10;n++)
        a[n]=0;
    printf("enter number\n");
    scanf("%d",&n);
    while(n>0)
    {
        a[n%10]++;
        n=n/10;
    }
    printf("occurences of each digit in number is as follws:\n");
    for(n=0;n<10;n++)
        printf("%d\t:\t%d\n",n,a[n]);
}
