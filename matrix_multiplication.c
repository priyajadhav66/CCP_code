/*matrix multiplication*/
#include<stdio.h>
void Accept(int a[10][10],int m,int n)
{
   int i,j;
   for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}

void Display(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
      printf("\n");
    }
    printf("\n");
}
void Mul(int a[10][10],int b[10][10],int c[10][10],int m,int n,int n1)
{
   int i,j,sum,k;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n1;j++)
                {
                    c[i][j]=0;
                     for(k=0;k<m;k++)
                     {
                     c[i][j]=c[i][j]+a[i][k]*b[k][j];
                     }
                }

        }
}
main()
{
int a[10][10],m,n,b[10][10],c[10][10],m1,n1;
printf("enter m and n\n");
scanf("%d%d",&m,&n);
Accept(a,m,n);

printf("enter m1 and n1\n");
scanf("%d%d",&m1,&n1);
Accept(b,m1,n1);

if(n==m1)
{
  Mul(a,b,c,m,n,n1);
  Display(a,m,n);
  Display(b,m1,n1);
  Display(c,m,n1);
}
else
    printf("n and m1 not matching");

}
