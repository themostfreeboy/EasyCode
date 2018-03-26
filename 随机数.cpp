#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
main()
{
   int i,n,a;
   time_t t;
   srand((unsigned) time(&t));
   printf("贾翔龙编\n此程序可以产生0~n之间的随机整数，请输入n\nn=");
   scanf("%d",&n);
   printf("\n请输入要产生0~%d之间随机正整数的个数a\na=",n);
   scanf("%d",&a);
   printf("\n\n");
   for(i=1;i<=a;i++)
       printf("第%d个\t%d\n",i,rand()%(n+1));
   getch();
}
