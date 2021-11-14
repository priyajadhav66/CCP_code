/* write a program to print all perfect numbers between 1 to n*/
#include<stdio.h>
main()
{
    int i,n,sum,d,j;
    printf("enter n\n");
    scanf("%d",&n);
    printf("Perfect Numbers Between 1 to %d are:\n",n);
    for(i=1;i<=n;i++)
    {

        sum=0;

        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            sum=sum+j;
        }
        if(sum==i)
            printf("%d\t",i);
    }


}
