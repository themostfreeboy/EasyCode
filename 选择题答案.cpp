#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
main()
{
   int i,n,a,x,b;
   time_t t;
   srand((unsigned) time(&t));
   printf("贾翔龙编\n此程序可以对选择题给出随机答案，但由于当前技术有限，只能算单选题，请给出选项个数\n\n");
   scanf("%d",&x);
           if(x>26) {printf("你输入的数据过大，此程序无法计算\n");goto m;}
           a=rand()%x;
           switch(a)
           {
           case 0:printf("选A\n");break;
           case 1:printf("选B\n");break;
           case 2:printf("选C\n");break;
           case 3:printf("选D\n");break;
           case 4:printf("选E\n");break;
           case 5:printf("选F\n");break;
           case 6:printf("选G\n");break;
           case 7:printf("选H\n");break;
           case 8:printf("选I\n");break;
           case 9:printf("选J\n");break;
           case 10:printf("选K\n");break;
           case 11:printf("选L\n");break;
           case 12:printf("选M\n");break;
           case 13:printf("选N\n");break;
           case 14:printf("选O\n");break;
           case 15:printf("选P\n");break;
           case 16:printf("选Q\n");break;
           case 17:printf("选R\n");break;
           case 18:printf("选S\n");break;
           case 19:printf("选T\n");break;
           case 20:printf("选U\n");break;
           case 21:printf("选V\n");break;
           case 22:printf("选W\n");break;
           case 23:printf("选X\n");break;
           case 24:printf("选Y\n");break;
           case 25:printf("选Z\n");break;
           }
           m:;
   getch();
}
