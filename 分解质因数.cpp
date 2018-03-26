#include<conio.h>
#include<stdio.h>
main()
{
      printf("贾翔龙编，此程序为分解质因数程序，请输入一个正整数\n\n");
      int n,tag=0,i,j,c=0,z,x,q;
      scanf("%d",&n);
      int a[n+1];
      printf("\n\n请选择显示类型\n1、显示%d的因式分解\n2、显示从1到%d的所有正整数的因式分解\n",n,n); 
      z=n;
      scanf("%d",&x);
      if(x==1) 
      {
               if(n==1)   printf("\n\n1=1\n\n");
               else if(n>=2)
               {
                            printf("\n\n%d=",n);
                            for(i=2;i<=n;i++)
                            {
                                             tag=0;
                                             for(j=2;j<i;j++)
                                             {
                                                             if(i%j==0)
                                                             {
                                                                       tag=1;
                                                                       c++;
                                                                       break;
                                                             }
                                             }
                                             if(tag==0)     a[c]=i;
                            }
                            for(i=2;i<=z;i++)
                            {
                                             if(z%i==0)
                                             {
                                                       printf("%d*",i);
                                                       z/=i;
                                                       i=1;
                                             }
                            }
                            printf("\b \n\n");
               }
               else printf("你输入的数据有误\n\n");
      }
      else if(x==2)
      {
              for(q=1;q<=n;q++)
              {
                              c=0;
                              z=q;
                              if(q==1)   printf("\n\n1=1\n");
                              else if(q>=2)
                              {
                                           printf("%d=",q);
                                           for(i=2;i<=q;i++)
                                           {
                                                            tag=0;
                                                            for(j=2;j<i;j++)
                                                            {
                                                                            if(i%j==0)
                                                                            {
                                                                                      tag=1;
                                                                                      c++;
                                                                                      break;
                                                                            }
                                                            }
                                                            if(tag==0)     a[c]=i;
                                           }
                                           for(i=2;i<=z;i++)
                                           {
                                                            if(z%i==0)
                                                            {
                                                            printf("%d*",i);
                                                            z/=i;
                                                            i=1;
                                                            }
                                           }
                                           printf("\b \n");
                              }
                              else printf("你输入的数据有误\n\n");
              } 
      }
      else printf("你输入的数据有误\n\n");
      getch();
}
