#include<conio.h>
#include<stdio.h>
#include<math.h>
int yanghui(int x,int y)
{
      int n,m,i,j,z;
      n=35;
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
      z=a[x+1][y];
      return z;
}
main()
{
      printf("贾翔龙编，此程序可以显示(a+b)^n的展开式(a、b为字母)，请输入n\n");
      int n,i,u;
      scanf("%d",&n);
      printf("\n");
      if(n>34)
           printf("你输入的数据过大，此程序无法运算\n");
      else if(n==1)
           printf("(a+b)^1=a+b");
      else if(n==2)
           printf("(a+b)^2=a^2+2*a*b+b^2");
      else if(n==3)
           printf("(a+b)^3=a^3+3*(a^2)*b+3*a*(b^2)+b^3");
      else if(n==4)
           printf("(a+b)^4=a^4+4*(a^3)*b+6*(a^2)*(b^2)+4*a*(b^3)+b^4");
      else if(n>=5&&n<=33)
      { 
              u=yanghui(n,2);
              printf("(a+b)^%d=a^%d+%d*(a^%d)*b+",n,n,u,n-1);
              for(i=2;i<=n-2;i++)
              {
                   u=yanghui(n,i+1);
                   printf("%d*(a^%d)*(b^%d)+",u,n-i,i);
              }
              u=yanghui(n,2);
              printf("%d*a*(b^%d)+b^%d",u,n-1,n);
      }
      else printf("\n你的输入有误\n");
      getch();
}
