#include<conio.h>
#include<stdio.h>
#include<string.h>
int maxn(int x,int y)
{
         int z;
         z=(x>y)?x:y;
         return z;
}
void jinwei(int x[],int i)
{
         if(x[i]==9)
         {
                  x[i]=0;
                  i--;
                  jinwei(x,i);  
         }
         else     x[i]++;
}
main()
{
     printf("��Ϊ��������ĸ߾��ȼӷ������Խ����1000λ���������ӷ�����ֱ������һ�������͵ڶ�������\n\n��һ������Ϊ:\n");
     char a[1024],b[1024];
     int i,na,nb,max,da[1024],db[1024],sum[1024],j;
     scanf("%s",&a);
     printf("\n\n�ڶ�������Ϊ:\n");
     scanf("%s",&b);
     printf("\n\n��Ϊ:\n");
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
     for(i=max;i>=0;i--)
     {
                          if(da[i]+db[i]<=9)
                          {
                                         sum[i]=da[i]+db[i];
                          }
                          else
                          {
                                         sum[i]=da[i]+db[i]-10;
                                         jinwei(da,i-1);
                          }
     }
     if(sum[0]==0)     j=1;
     else     j=0;
     for(i=j;i<=max;i++)
               printf("%d",sum[i]);
     printf("\n\n");
     getch();
}
