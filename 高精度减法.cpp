#include<conio.h>
#include<stdio.h>
#include<string.h>
int bijiao(int x[],int y[],int n)
{
    int tag=2,i;
    for(i=1;i<=n;i++)
    {
                     if(x[i]>y[i])
                     {
                                  tag=1;
                                  break;
                     }
                     if(x[i]<y[i])
                     {
                                  tag=0;
                                  break;
                     }
                     if(x[n]==y[n])     tag=2;
    }
    return tag;
}
int maxn(int x,int y)
{
         int z;
         z=(x>y)?x:y;
         return z;
}
void jiewei(int x[],int i)
{

              if(x[i]==0)
              {
                   x[i]=9;
                   jiewei(x,i-1);  
              }
              else     x[i]--;

}
main()
{
     printf("此为贾翔龙编的高精度减法，可以解决近1000位的正整数减法，请分别输入被减数和减数\n\n被减数为:\n");
     char a[1024],b[1024];
     int i,na,nb,max,da[1024],db[1024],sum[1024],j,fuhao=0;
     scanf("%s",&a);
     printf("\n\n减数为:\n");
     scanf("%s",&b);
     printf("\n\n差为:\n");
     na=strlen(a);
     nb=strlen(b);
     max=maxn(na,nb);
     for(i=max;i>=1;i--)
     {
                                  a[i]=a[i-max+na-1];
                                  b[i]=b[i-max+nb-1];
     }
     for(i=0;i<=max-na;i++)     a[i]='0';
     for(i=0;a[i]!='\0';i++)     da[i]=a[i]-48;
     for(i=0;i<=max-nb;i++)     b[i]='0';
     for(i=0;b[i]!='\0';i++)     db[i]=b[i]-48;
     if(na==nb)     fuhao=bijiao(da,db,na);
     for(i=max;i>=1;i--)
     {
                if(na>nb||(na==nb&&fuhao==1))
                {
                          if(da[i]>=db[i])
                          {
                                         sum[i]=da[i]-db[i];
                          }
                          else
                          {
                                         sum[i]=da[i]+10-db[i];
                                         jiewei(da,i-1);
                          }
                }
                else if(na<nb||(na==nb&&fuhao==0))
                {
                          if(db[i]>=da[i])
                          {
                                         sum[i]=db[i]-da[i];
                          }
                          else
                          {
                                         sum[i]=db[i]+10-da[i];
                                         jiewei(db,i-1);
                          }
                }
                else if(na==nb&&fuhao==2)
                {
                     printf("0");
                     goto m;
                }
     }
     j=0;
     for(i=0;sum[i]==0;i++)
     {
               if(sum[i]==0)     j++;
               else if(sum[i]!=0)     break;
     }
     if(na<nb||(na==nb&&fuhao==0))     printf("-");
     for(i=j;i<=max;i++)
               printf("%d",sum[i]);
     m:;
     printf("\n\n");
     getch();
}
