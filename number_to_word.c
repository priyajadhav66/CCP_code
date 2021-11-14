/* numbers to word*/
#include<stdio.h>
#include<string.h>
void read(char n[],char str[],int a)
{
    int i=0;
    char digit[10][10]={"ONE ","TWO ","THREE ","FOUR ","FIVE ","SIX ","SEVEN ","EIGHT ","NINE "};
    char s[10][10]={"TEN ","ELEVEN ","TWELVE ","THIRTEEN ","FOURTEEN ","FIFTEEN ","SIXTEEN ","SEVENTEEN ","EIGHTEEN ","NINETEEN "};
    char q[10][10]={"TWENTY ","THIRTY ","FOURTY ","FIFTY ","SIXTY ","SEVENTY ","EIGHTY ","NINETY "};
    while(a)
    {
        if(a==3|a==1)
        {
            a--;
            strcat(str,digit[n[i]-49]);
            i++;
             if(a==2 & n[i-1]!='0')
               strcat(str,"HUNDRED ");
         }
        if(a==2)
        {
            a--;
            if(n[i]=='1')
            {
                i++;
                strcat(str,s[n[i]-48]);
                a--;
            }
            else
            {
                 strcat(str,q[n[i]-50]);
                 i++;
            }

        }
    }

}

void read1(char n[],char str[])
{
    char b[10][10]={"","THOUSAND ","MILLION ","BILLION ","TRILLION ","QUADRILLION ","SEXTILLION ","SEPTILLION ","OCTILLION ","NONILLION","DECILLION"};
    int d=strlen(n);
    while(d)
    {
         if(d%3==0)
         {
            read(n,str,3);
            d=d-3;
            n=n+3;
           // printf("%c\n",n[0]);
         }
          else
          {
              read(n,str,d%3);
              n=n+(d%3);
              d=d-(d%3);

             // printf("%s\n",n);
          }
           if((str[strlen(str)-2]=='N')&(str[strlen(str)-3]=='O'))
                   {}
                   else
                   strcat(str,b[d/3]);
    }

}
main()
{
    char n[100],str[100]="\0";
    int i=0;
    while((n[i]=getchar())!='\n')
    {
        if(!isdigit(n[i]))
            {
                n[i]='\0';
                break;
            }
        i++;
    }

    if(n[i]=='\n')
        n[i]='\0';

    if(n[0]=='0')
        printf("ZERO\n");
    else
    {
        read1(n,str);
    printf("%s\n",str);
    }
}
