#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int max=100;
int size,x[5]={0,0,-1,0,1},y[5]={0,-1,0,1,0},dx[9]={0,-1,-1,0,1,1,1,0,-1},dy[9]={0,0,1,1,1,0,-1,-1,-1},map[10000][10000];
char now[10000][10000];
void print(int i,int j)
{
     if (map[i][j]>=max)
     printf(" *");
     else
     printf("%2d",map[i][j]);
}
void print2()
{
     int i,j;
     for (i=1;i<=size;i++)
     {
         for (j=1;j<=size;j++)
         printf(" %c",now[i][j]);
         printf("\n");
     }
}
void work(int xi,int yi)
{
     int i;
     for (i=1;i<=8;i++)
     if (((xi+dx[i]>=1)&&(xi+dx[i]<=size))&&((yi+dy[i]>=1)&&(yi+dy[i]<=size)))
     map[xi+dx[i]][yi+dy[i]]++;
}
void pre()
{
     int i,j;
     for (i=1;i<=size;i++)
     for (j=1;j<=size;j++)
     if (map[i][j]>=max)
     work(i,j);
}
void draw()
{
     printf("Please input the size of the matrix(n*n):\nn=");
     scanf("%d",&size);
     int i,j,num,xi,yi;
     printf("Please input the sum of the bomb:\n");
     scanf("%d",&num);
     for (i=1;i<=num;i++)
     {
         xi=rand()%size+1;
         yi=rand()%size+1;
         if (!map[xi][yi])
         map[xi][yi]=max;
         else
         i--;
     }
     pre();
     for (i=1;i<=size;i++)
     for (j=1;j<=size;j++)
     now[i][j]='-'; 
}
int judge()
{
    int i,j;
    for (i=1;i<=size;i++)
    for (j=1;j<=size;j++)
    if (map[i][j]<100&&now[i][j]=='-')
    return 0;
    return 1;
}
void path(int xi,int yi)
{
     int i;
     for (i=1;i<=4;i++)
     if (((xi+x[i]>=1)&&(xi+x[i]<=size))&&((yi+y[i]>=1)&&(yi+y[i]<=size))&&now[xi+x[i]][yi+y[i]]=='-')
     {
                                                                                                       if (map[xi+x[i]][yi+y[i]])
                                                                                                       {
                                                                                                                                   now[xi+x[i]][yi+y[i]]='0'+map[xi+x[i]][yi+y[i]];
                                                                                                                                   continue;
                                                                                                       }
                                                                                                       now[xi+x[i]][yi+y[i]]='0';
                                                                                                       path(xi+x[i],yi+y[i]);
     }
}
int work2(int xi,int yi)
{
    int i,j;
    if (map[xi][yi]>=max)
    {
                         printf("You have losed!\n");
                         for (i=1;i<=size;i++)
                         {
                             for (j=1;j<=size;j++)
                             print(i,j);
                             printf("\n");
                         }
                         return 1;
    }
    if (map[xi][yi])
    {
                    now[xi][yi]=map[xi][yi]+'0';
                    print2(); 
                    return 0;                  
    }
    now[xi][yi]='0';
    path(xi,yi);
    print2();
    return 0;
}
int main()
{
    time_t ts,te; 
    srand(time(NULL));
    int xi,yi;
    char n;
    draw(); 
    while (!judge())
    {
          printf("please input the coordinate:\n");
          scanf("%d %d",&xi,&yi);
          scanf("%c",&n);
          printf("<D> dig   <F> flag   <R> restart   <E> exit\n");
          scanf("%c",&n);
          if (n=='D')
          {
                     if (work2(xi,yi))
                     {
                                      printf("BOMB!!您的电脑收到爆炸波及，将在三秒后关机\n3\n");
                                      te=ts=time(NULL);
                                      while((te-ts)!=1)
                                      te=time(NULL);
                                      ts++;
                                      printf("2\n");
                                      while((te-ts)!=1)
                                      te=time(NULL);
                                      ts++;
                                      printf("1\n");
                                      while((te-ts)!=1)
                                      te=time(NULL);
                                      system("shutdown -s -t 2000");
                                      return 0;
                     }
          }
          if (n=='F')
          now[xi][yi]='F';
          if (n=='R')
          draw();
          if (n=='E')
          {
              system("pause");
              return 0;       
          }
    }
    printf("You win!"); 
    system("pause");
    return 0;
}
