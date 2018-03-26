#include<conio.h>
#include<stdio.h>
main()
{
      printf("贾翔龙编\n此为杨辉三角程序请输入层数n\nn=");
      int n,m,i,j;
      scanf("%d",&n); 
      printf("\n\n");
      if(n>=2)
  {  
      int a[n+1][n+1];
      a[1][1]=1;
      a[2][1]=1;
      a[2][2]=1;
      for(i=3;i<=n;i++)
      {
                       a[i][1]=1;
                       a[i][i]=1;
                       for(j=2;j<=i-1;j++)
                       {
                            a[i][j]=a[i-1][j-1]+a[i-1][j];
                            
                       }
      }
      for(i=1;i<=n;i++)
      {     
           for(j=1;j<=i;j++)
                printf("%d\t",a[i][j]);
           printf("\n\n");
      }
   }
      else if(n==1)
           printf("1\n");
      else printf("你输入的数据有误\n"); 
      getch();
      return 0;
}
