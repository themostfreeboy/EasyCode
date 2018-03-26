#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
      printf("此程序可以对质数判断和输出，贾翔龙编\n请选择类型\n1、判断质数\n2、输出质数（在当前窗口输出）\n3、质数输出（在此程序文件所在文件夹的新建文本文档中输出）\n\n\n");
      int zx;
      scanf("%d",&zx);
      if(zx==1)
      {
           int i,a,n,j,c,tag=0;
           float b;
           printf("此程序可以判断你给的正整数是否为质数，请输入要判断的正整数的个数\n");
           scanf("%d",&a);
           int z[a];
           printf("\n",a);
           printf("请依次输入这%d个正整数\n注：正小数将用去尾法转化成正小数\n",a);
           for(j=0;j<a;j++)
                scanf("%d",&z[j]);
           printf("\n\n");
           for(i=0;i<a;i++)
           {
                  if(z[i]<=0)
                       printf("%d:你输入的数据有误\n",z[i]);
                  else
                  { 
                         b=sqrt(z[i]);
                         if(z[i]==1)
                              printf("1既不是质数也不是合数\n");
                         else
                         {
                              for (j=2;j<=b;j++)
                              {
                                  c=z[i]%j;
                                  if(c==0)
                                  {
                                          tag=1;
                                          break;
                                  }                   
                              }
                              if(tag==1)
                                    printf("%d不是质数\n",z[i]);
                              else if(tag==0)
                                    printf("%d是质数\n",z[i]);
                              tag=0;
                          }
                    }
           }
           getch();
      }
      else if(zx==2)
      {
           printf("此程序可以算出你给的正整数以内的质数，请输入项数n\nn=");
           long int n,i,j,tag=0;
           float b,c;
           scanf("%d",&n);
           printf("\n");
           for (i=2;i<=n;i++)
           {
                tag=0;
                b=sqrt(i);
                for (j=2;j<=b;j++)
                {
                     c=i%j;
                     if(c==0)
                     {
                             tag=1;
                             break;
                     }
                }
                if(tag==0)
                     printf("%d\n",i);
            }
            getch();
      }
      else if(zx==3)
      {
           printf("此程序可以输出你给的正整数以内的质数，请输入项数n\nn=");
           long int n,i,j,tag;
           float b,c;
            FILE *p1;
           p1=fopen("质数输出(贾翔龙编).txt","w");
           scanf("%d",&n);
           printf("\n");
           for (i=2;i<=n;i++)
           {
                tag=0;
                b=sqrt(i);
                for (j=2;j<=b;j++)
                {
                     c=i%j;
                     if(c==0)
                     {
                             tag=1;
                             break;
                     }
                }
                if(tag==0)
                     fprintf(p1,"%d\n",i);
           }
      }
      else 
      {
           printf("你输入的数有误\n");
           getch();
      }
}
