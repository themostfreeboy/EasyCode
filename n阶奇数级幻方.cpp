#include<stdio.h>
#include<conio.h>
int turnminus(int x,int n)
{
      if(x==1)      x=n;
            else      x=x-1;
      return x;
}
int turnplus(int x,int n)
{
      if(x==n)      x=1;
            else      x=x+1;
      return x;
}
main()
{
      int i,j,n,tag;
      FILE *p;
      printf("此为贾翔龙编的n阶奇数级幻方，请输入奇数阶数n\nn=");
      m:;
      scanf("%d",&n);
      if(n>=1&&n%2!=0)
      {
                      int a[n+1][n+1];
                      p=fopen("n阶幻方.txt","w");
                      for(i=1;i<=n;i++)
                             for(j=1;j<=n;j++)
                                       a[i][j]=0;
                      i=1;
                      j=(n+1)/2;
                      a[i][j]=1;
                      for(tag=2;tag<=n*n;tag++)
                      {
                                 if(a[turnminus(i,n)][turnplus(j,n)]==0)
                                 {
                                             i=turnminus(i,n);
                                             j=turnplus(j,n);
                                             a[i][j]=tag;
                                 }
                                 else
                                 {
                                             i=turnplus(i,n);
                                             a[i][j]=tag;
                                 }
                      }
                      for(i=1;i<=n;i++)
                      {
                                       for(j=1;j<=n;j++)
                                       {
                                                        fprintf(p,"%d\t",a[i][j]);
                                       }
                                       fprintf(p,"\n");
                      }
                      fclose(p);
      }
      else
      {
                     printf("\n你输入的数据有误，请重新输入\n");
                     goto m;
      }
      printf("\nn阶幻方已输入到与本程序相同目录下的“n阶幻方.txt”文件中，请自行去查看，按任意键退出\n");
      getch();
}
