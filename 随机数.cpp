#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
main()
{
   int i,n,a;
   time_t t;
   srand((unsigned) time(&t));
   printf("��������\n�˳�����Բ���0~n֮������������������n\nn=");
   scanf("%d",&n);
   printf("\n������Ҫ����0~%d֮������������ĸ���a\na=",n);
   scanf("%d",&a);
   printf("\n\n");
   for(i=1;i<=a;i++)
       printf("��%d��\t%d\n",i,rand()%(n+1));
   getch();
}
