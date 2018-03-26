#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
      int n,m,i,j,tag,l;
      printf("贾翔龙编，此程序可显示约瑟夫数，请输入总人数\n");
      scanf("%d",&n);
      printf("请输入间隔数\n");
      scanf("%d",&m);
      int a[n+1];
      printf("请依次输入这%d个人所代表的数\n",n);
      for(i=1;i<=n;i++)
                scanf("%d",&a[i]);
      i=0;
      printf("\n\n死亡顺序为\n");
      for(j=1;j<=n+1;j++)
      {
                if(j>n)
                         j=1;
                if(a[j]!=0)
                {
                          i++;
                          i=i%m;
                          if(i==0)
                          {
                                   printf("%d\t",a[j]);
                                   a[j]=0;
                          }
                }
                tag=0;
                for(l=1;l<=n;l++)
                     if(a[l]==0)     tag++;
                if(tag>=n)     break;
      }
      printf("\n\n贾翔龙编\n\n");
      getch();
}
