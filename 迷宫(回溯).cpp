#include<stdio.h>
#include<conio.h>
int n,ai[5]={0,-1,0,1,0},aj[5]={0,0,1,0,-1},map[1024][1024],tag=0;
void work(int x,int y)
{
     int i;
     if(x==n&&y==n)
     {
                   printf("yes");
                   tag=1;
                   getch();
     }
     for(i=1;i<=4;i++)
     {
                      if(x+ai[i]>=1&&x+ai[i]<=n&&y+aj[i]>=1&&y+aj[i]<=n&&map[x+ai[i]][y+aj[i]]==0)
                      {
                                    map[x][y]=1;
                                    work(x+ai[i],y+aj[i]);
                                    map[x][y]=0;
                      }
     }
}
main()
{
      FILE *p;
      int i,j;
      p=fopen("1.txt","r");
      fscanf(p,"%d",&n);
      for(i=1;i<=n;i++)
              for(j=1;j<=n;j++)
                       fscanf(p,"%d",&map[i][j]);
      fclose(p);
      work(1,1);
      if(tag==0)
      {
                printf("no");
                getch();
      }
}
