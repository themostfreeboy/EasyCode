#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void show(int x[51][51])
{
     int i,j;
     char a,b;
     a=15;
     b=127;
     printf("\t");
     for(i=1;i<=9;i++)       printf("%d ",i);
     for(i=10;i<=20;i++)     printf("%d",i);
     printf("\n\n");
     for(i=1;i<40;i++)
     {
                       if(i%2!=0)         printf("%d\t",(i+1)/2);
                       for(j=1;j<40;j++)
                       {
                                         if(x[i][j]==1)            printf("%c",a);
                                         else if(x[i][j]==2)       printf("%c",b);
                                         else if(x[i][j]==0)       printf("0");
                                         else                      printf(" ");
                       }
                       printf("\n");
     }
}
int judge(int x[51][51])
{
     int i,j;
     for(i=1;i<40;i+=2)
     {
                       for(j=1;j<40;j+=2)
                       {
                                         if(x[i][j]==1&&x[i+2][j]==1&&x[i+4][j]==1&&x[i+6][j]==1&&x[i+8][j]==1)
                                         {
                                                          return 1;                                                     
                                         }
                                         if(x[i][j]==1&&x[i][j+2]==1&&x[i][j+4]==1&&x[i][j+6]==1&&x[i][j+8]==1)
                                         {
                                                          return 1;                                                     
                                         }
                                         if(x[i][j]==1&&x[i+2][j+2]==1&&x[i+4][j+4]==1&&x[i+6][j+6]==1&&x[i+8][j+8]==1)
                                         {
                                                          return 1;                                                     
                                         }
                                         if(x[i][j]==2&&x[i+2][j]==2&&x[i+4][j]==2&&x[i+6][j]==2&&x[i+8][j]==2)
                                         {
                                                          return 2;                                                     
                                         }
                                         if(x[i][j]==2&&x[i][j+2]==2&&x[i][j+4]==2&&x[i][j+6]==2&&x[i][j+8]==2)
                                         {
                                                          return 2;                                                     
                                         }
                                         if(x[i][j]==2&&x[i+2][j+2]==2&&x[i+4][j+4]==2&&x[i+6][j+6]==2&&x[i+8][j+8]==2)
                                         {
                                                          return 2;                                                     
                                         }
                       }
     }
     return 0;
}
main()
{
      int i,j,data[51][51],num=0,m,n;
      char a,b;
      a=15;
      b=127;
      printf("��Ϊ������������������̣����Ϊ20��20�ģ��������˶��ģ�˫��ֱ���໥��������ӵ����꼴�ɣ����Ӵ���ʾ��0�����м׷��Ӵ���ʾ��%c�������ҷ��Ӵ���ʾ��%c�������������ʼ���˳�ֱ�ӹرմ˴��ڼ���\n",a,b);
      getch();
      for(i=0;i<=50;i++)
      {
                        for(j=0;j<=50;j++)
                        {
                                          if(i%2==0)              data[i][j]=9;
                                          else if(j%2==0)         data[i][j]=9;
                                          else                    data[i][j]=0;
                        }
      }
      system("CLS");
      show(data);
      printf("\n\n\n");
      while(1)
      {
              scanf("%d%d",&m,&n);
              if(m>=1&&m<=20&&n>=1&&n<=20&&data[2*m-1][2*n-1]==0)
              {
                            if(num%2==0)          data[2*m-1][2*n-1]=1;
                            else                  data[2*m-1][2*n-1]=2;
                            system("CLS");
                            show(data);
                            printf("\n\n\n");
                            num++;
              }
              else
              {
                    system("CLS");
                    printf("�������������������������\n\n");
                    show(data);
                    printf("\n\n\n");
              }
              if(judge(data)==1)
              {
                                system("CLS");
                                show(data);
                                printf("��Ϸ�������׷�ʤ\n��������˳�\n");
                                break;
              }
              if(judge(data)==2)
              {
                                system("CLS");
                                show(data);
                                printf("��Ϸ�������ҷ�ʤ\n��������˳�\n");
                                break;
              }
      }
      getch(); 
}
