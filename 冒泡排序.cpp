#include<conio.h>
#include<stdio.h>
main()
{
      printf("贾翔龙编\n此为排序系统，请输入排序的整数n\nn=");
      int n,i,j;
      scanf("%d",&n);
      int a[n+1];
      printf("\n\n请依次输入这%d个数\n",n);
      for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
      a[0]=0;
      for(i=0;i<=n-1;i++)
      {
                       for(j=n;j>=n-i-1;j--)
                       {
                                        
                                          if(a[j]>a[j+1])
                                          {         a[0]=a[j];
                                                    a[j]=a[j+1];
                                                    a[j+1]=a[0];
                                          }
                       }
      }
      printf("\n\n");
      for(i=1;i<=n;i++)
           printf("%d\t",a[i]);
      getch();
}
