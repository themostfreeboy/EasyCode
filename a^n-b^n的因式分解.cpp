#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
      printf("贾翔龙编，此程序可以显示a^n-b^n的因式分解形式(a、b为字母)，请输入n\n");
      int n,i,u;
      scanf("%d",&n);
      printf("\n");
      if(n==1)
           printf("a-b=a-b");
      else if(n==2)
           printf("a^2-b^2=(a-b)*(a+b)");
      else if(n==3)
           printf("a^3-b^3=(a-b)*(a^2+a*b+b^2)");
      else if(n==4)
           printf("a^4-b^4=(a-b)*(a^3+(a^2)*b+a*(b^2)+b^3)");
      else if(n>=5)
      {
              printf("a^%d-b^%d=(a-b)(a^%d+(a^%d)*b+",n,n,n-1,n-2);
              for(i=2;i<=n-3;i++)
              {
                   printf("(a^%d)*(b^%d)+",n-1-i,i);
              }
              printf("a*(b^%d)+b^%d)\n\n",n-2,n-1);
      }
      else printf("\n你的输入有误\n");
      getch();
}
