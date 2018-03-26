#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      int n,i,j,z;
      printf("此程序可以将你所给的整数进行排序，贾翔龙编\n\n请选择排序类型:\n1、从小到大排序\n2、从大到小排序\n\n");
      scanf("%d",&z);
      if(z!=1&&z!=2)
           printf("你输入的数据有误\n\n");
      else
      {
          printf("\n\n请输入要排序整数的个数\n\n");
          scanf("%d",&n);
          int a[n+1];
          printf("\n请依次输入这%d个整数\n\n",n);
          for(i=1;i<n+1;i++)
               scanf("%d",&a[i]);
          for(i=1;i<n+1;i++)
          {
               a[0]=a[i];
               for(j=i-1;a[j]>a[0];j--)
               {
                    a[j+1]=a[j];
                    a[j]=a[0];                        
               }
          }
          if(z==1)
          {
               printf("从小到大排列为");
               for(i=1;i<n+1;i++)
                    printf("%d\t",a[i]);
          }
          else if(z==2)
          {
               printf("从大到小排列为");
               for(i=n;i>=1;i--)
                    printf("%d\t",a[i]);
          } 
      }
      getch();
      return 0;
}
