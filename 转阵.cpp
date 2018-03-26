#include<conio.h>
#include<stdio.h>
main()
{
      int n,m,i,j;
      scanf("%d",&n); 
      scanf("%d",&m); 
      if(m>n) 
      {
           int a[m+1][m+1];
           for(i=1;i<=n;i++)
                for(j=1;j<=m;j++)
                     scanf("%d",&a[i][j]);
           for(i=1;i<=m;i++)
                for(j=1;j<=n;j++)
                     printf("%d",&a[j][i]);
      }
      else 
      {
           int a[n+1][n+1];
           for(i=1;i<=n;i++)
                for(j=1;j<=m;j++)
                     scanf("%d",&a[i][j]);
                     printf("\n");
           for(i=1;i<=m;i++)
           {
                for(j=1;j<=n;j++)
                     printf("%d\t",a[j][i]);
                printf("\n");
           }
      }
      getch();
      return 0;
}
