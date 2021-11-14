/*
Insert
Detete
Print entire book list
Search
*/
#include<stdio.h>
int Search(char Book[100][100],char name[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(!strcmp(Book[i],name))
            return i;
    }
    return -1;
}
void Delete(char Book[100][100],char name[100],int *n)
{
  int i,j;
  j=Search(Book,name,*n);
  while(j<*n)
  {
      strcpy(Book[j],Book[j+1]);
      j++;
  }
  *n=*n-1;
}
void Display(char Book[100][100],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%s\n",Book[i]);
}
main()
{
    char Book[100][100],name[100];
    int i,j,n=0,ch=1;
    printf("Menu:\n1.insert book\n2.delete book\n3.display list\n4.Search book\n5.Exit\n");
    do
    {
        printf("enter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter book name\n");
                    scanf("%s",Book[n++]);
                    break;
            case 2:printf("enter book name to delete\n");
                   scanf("%s",name);
                   Delete(Book,name,&n);
                   break;
            case 3:printf("Book List:\n");
                   Display(Book,n);
                   break;
            case 4:printf("enter book name\n");
                    scanf("%s",name);
                    printf("found at %d position\n",Search(Book,name,n));
                    break;
        }

    }while(ch!=5);
}
