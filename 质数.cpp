#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
      printf("�˳�����Զ������жϺ��������������\n��ѡ������\n1���ж�����\n2������������ڵ�ǰ���������\n3������������ڴ˳����ļ������ļ��е��½��ı��ĵ��������\n\n\n");
      int zx;
      scanf("%d",&zx);
      if(zx==1)
      {
           int i,a,n,j,c,tag=0;
           float b;
           printf("�˳�������ж�������������Ƿ�Ϊ������������Ҫ�жϵ��������ĸ���\n");
           scanf("%d",&a);
           int z[a];
           printf("\n",a);
           printf("������������%d��������\nע����С������ȥβ��ת������С��\n",a);
           for(j=0;j<a;j++)
                scanf("%d",&z[j]);
           printf("\n\n");
           for(i=0;i<a;i++)
           {
                  if(z[i]<=0)
                       printf("%d:���������������\n",z[i]);
                  else
                  { 
                         b=sqrt(z[i]);
                         if(z[i]==1)
                              printf("1�Ȳ�������Ҳ���Ǻ���\n");
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
                                    printf("%d��������\n",z[i]);
                              else if(tag==0)
                                    printf("%d������\n",z[i]);
                              tag=0;
                          }
                    }
           }
           getch();
      }
      else if(zx==2)
      {
           printf("�˳�����������������������ڵ�����������������n\nn=");
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
           printf("�˳�����������������������ڵ�����������������n\nn=");
           long int n,i,j,tag;
           float b,c;
            FILE *p1;
           p1=fopen("�������(��������).txt","w");
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
           printf("�������������\n");
           getch();
      }
}
