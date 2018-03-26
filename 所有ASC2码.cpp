#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
      int i,choose;
      printf("此为贾翔龙编的0~127的ASC2码的显示，屏幕显示请按1，文件显示请按2\n");
      scanf("%d",&choose);
      if(choose==1)
      {
                   system("cls");
                   for(i=0;i<=127;i++)          printf("%d\t%c\n",i,i);
                   printf("\n屏幕显示完毕，按任意键退出\n贾翔龙编\n");
      }
      else if(choose==2)
      {
                   FILE *p;
                   p=fopen("所有ASC2码.txt","w");
                   for(i=0;i<=127;i++)          fprintf(p,"%d\t%c\n",i,i);
                   fprintf(p,"\n贾翔龙编\n");
                   fclose(p);
                   system("cls");
                   printf("文件显示完毕，文件在与本程序相同目录下的“所有ASC2码.txt”中，请自行查看，按任意键退出\n贾翔龙编\n");
      } 
      getch();
}
