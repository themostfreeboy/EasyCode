#include <stdio.h>
int n,ans,a[10000][10000],d[1000];
int judge()
{
    int k=0,i,j;
    for (i=1;i<=n;i++)
    for (j=1;j<i;j++)
    if (d[j]>d[i])
    k++;
    if (k%2)
    return 0;
    return 1;
}
int sum()
{
    int c=1,i;
    for (i=1;i<=n;i++)
    c*=a[i][d[i]];
    return c;
}
void work(int m)
{
     int i,j,teg;
     for (i=1;i<=n;i++)
     {
         for (j=m-1;j>=1;j--)
         {
             if (i!=d[j])
             teg=1;
             else 
             {
                  teg=0;
                  break;
             }
         }
         if (!teg)continue;
         d[m]=i;
         if (m==n)
         {
                  if (judge())
                  ans+=sum();
                  else
                  ans-=sum();
                  return;
         }
         work(m+1);
     }
}
int main()
{
    printf("本程序可以计算N*N矩阵行列式的值\n*注意：中途输入错误请重新运行本程序，否则会得到错误答案！*\n"); 
    char k;
    while (1)
    {
          printf("请输入矩阵的维度\n");
          int i,j;
          scanf("%d",&n);
          if (!n)
          {
                 printf("输入有误！\n");
                 continue; 
          }
          printf("请输入矩阵\n");
          for (i=1;i<=n;i++)
          for (j=1;j<=n;j++)
          scanf("%d",&a[i][j]);
          if (n==1)
          ans=a[1][1];
          else
          work(1);
          printf("%d\n",ans);
          scanf("%c",&k);
          while (1)
          {
                printf("继续计算请输入Y，退出请输入N\n");
                scanf("%c",&k);
                if (k=='Y')
                break;
                if (k=='N')
                return 0;
                else
                printf("输入有误！\n");
          }
    }
}
