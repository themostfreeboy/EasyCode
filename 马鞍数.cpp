#include<conio.h>
#include<stdio.h>
main()
{
      int z,x,i,j,q=1,min,max,tag=0,c;
      printf("此为马鞍数输出程序，请输入矩阵行数："); 
      scanf("%d",&z);
      printf("\n请输入矩阵列数："); 
      scanf("%d",&x);
      int a[z+1][x+1];
      printf("\n请依次输入这%d行%d列数：\n",z,x);
      for(i=1;i<=z;i++)
           for(j=1;j<=x;j++)
                scanf("%d",&a[i][j]);
      for(i=1;i<=z;i++)
      {
                       min=a[i][1];
                       q=1;
                       for(j=1;j<=x-1;j++)
                       {
                                  if(min>a[i][j+1])
                                  {
                                                 min=a[i][j+1];                                  
                                                 q=j+1;
                                  }
                       }
                       max=min;
                       for(c=1;c<=z;c++)
                       {
                                        tag=0;
                                        if(max<a[c][q])  
                                        {
                                                         tag=1;
                                                         break;
                                        }
                       }
                       if(tag==0)
                       {
                               printf("\n\n马鞍数为%d\n",a[i][q]);
                               break;
                       }
       }
                       
      if(tag==1)
                            printf("\n\n无\n");
      getch();
}
