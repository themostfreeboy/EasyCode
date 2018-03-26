#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{      
       printf("贾翔龙\n此为斐波那契数列，请输入项数n\n\nn=");
       int n,i=0;
       scanf("%d",&n);
       int a[n+1];
       a[0]=1,a[1]=1;
       if (n==1) printf("\n斐波那契数列前1项为：\n1\n",n);
       if (n==2) printf("\n斐波那契数列前2项为：\n1\n1\n",n);
       if (n>=3) 
       {   printf("\n斐波那契数列前%d项为：\n1\n1\n",n);
           for(i=3;i<=n;i++)
           {
              a[i-1]=a[i-2]+a[i-3];
              printf("%d\n",a[i-1]);
           }
       }
       else printf("您输入数据错误\n");
       getch();
}
