#include<conio.h>
#include<stdio.h>
#include<math.h>
int zhishu(int x)
{
         int i,tag=0;
         if(x==1)          tag=1;
         else
         {
                  for(i=2;i<=sqrt(x);i++)
                  {
                                        if(x%i==0)
                                        {
                                                  tag=1;
                                                  break;
                                        }
                  }
         }
         return tag;
}
main()
{
                    int a,b,i,tag=0;
                    printf("贾翔龙编\n此为质数输出程序，可以输出从a到b的所有质数，请分别输入a和b\na=");
                    scanf("%d",&a);
                    printf("\nb=");
                    scanf("%d",&b);
                    printf("\n\n");
                    for(i=a;i<=b;i++)
                    {
                                     if(zhishu(i)==0)
                                     {
                                                     printf("%d\t",i);
                                                     tag++;
                                     }
                    }
                    printf("\n\n共%d个\n",tag);
                    getch();                  
}
