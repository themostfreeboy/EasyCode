#include<stdio.h>
#include<conio.h>
main()
{
      int n;
      printf("贾翔龙编，此程序可以查出n个数的最大值，请先输入n\nn=");
      scanf("%d",&n);
      printf("\n请依次输入这%d个数\n",n);
      int max=0,i,a[n];
      for(i=0;i<=(n-1);i++)
      scanf("%d",&a[i]);
      printf("\n");
      max=(a[1]>a[0])?a[1]:a[0];
      for(i=0;i<=(n-2);i++)
      max=(a[i+1]>max)?a[i+1]:max;
      printf("这%d个数的最大值为%d\n",n,max);
      getch();
}
