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
      printf("此为贾翔龙编的五子棋棋盘，规格为20×20的，可以两人对弈，双方直接相互打出所下子的坐标即可，无子处显示“0”，有甲方子处显示“%c”，有乙方子处显示“%c”，按任意键开始，退出直接关闭此窗口即可\n",a,b);
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
                    printf("你输入的数据有误，请重新输入\n\n");
                    show(data);
                    printf("\n\n\n");
              }
              if(judge(data)==1)
              {
                                system("CLS");
                                show(data);
                                printf("游戏结束，甲方胜\n按任意键退出\n");
                                break;
              }
              if(judge(data)==2)
              {
                                system("CLS");
                                show(data);
                                printf("游戏结束，乙方胜\n按任意键退出\n");
                                break;
              }
      }
      getch(); 
}
