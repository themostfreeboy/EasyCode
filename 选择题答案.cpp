#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
main()
{
   int i,n,a,x,b;
   time_t t;
   srand((unsigned) time(&t));
   printf("��������\n�˳�����Զ�ѡ�����������𰸣������ڵ�ǰ�������ޣ�ֻ���㵥ѡ�⣬�����ѡ�����\n\n");
   scanf("%d",&x);
           if(x>26) {printf("����������ݹ��󣬴˳����޷�����\n");goto m;}
           a=rand()%x;
           switch(a)
           {
           case 0:printf("ѡA\n");break;
           case 1:printf("ѡB\n");break;
           case 2:printf("ѡC\n");break;
           case 3:printf("ѡD\n");break;
           case 4:printf("ѡE\n");break;
           case 5:printf("ѡF\n");break;
           case 6:printf("ѡG\n");break;
           case 7:printf("ѡH\n");break;
           case 8:printf("ѡI\n");break;
           case 9:printf("ѡJ\n");break;
           case 10:printf("ѡK\n");break;
           case 11:printf("ѡL\n");break;
           case 12:printf("ѡM\n");break;
           case 13:printf("ѡN\n");break;
           case 14:printf("ѡO\n");break;
           case 15:printf("ѡP\n");break;
           case 16:printf("ѡQ\n");break;
           case 17:printf("ѡR\n");break;
           case 18:printf("ѡS\n");break;
           case 19:printf("ѡT\n");break;
           case 20:printf("ѡU\n");break;
           case 21:printf("ѡV\n");break;
           case 22:printf("ѡW\n");break;
           case 23:printf("ѡX\n");break;
           case 24:printf("ѡY\n");break;
           case 25:printf("ѡZ\n");break;
           }
           m:;
   getch();
}
