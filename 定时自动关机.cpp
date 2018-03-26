#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
main()
{
      int t,i,num=0;
      char s[1024],code[10][1024];
      strcpy(code[0],"cancel");
      strcpy(code[1],"exit");
      //可在此继续添加其它相应字符代码 
      printf("此为自动关机程序，请输入想要多长时间自动关机，输入分钟数(1~10之间的整数)即可(JXL制)\n");
      n:;
      scanf("%d",&t);
      system("CLS");
      if(t==1)
      {
              system("shutdown -s -t 60");
              printf("你的电脑将在%d分钟之后自动关机，若要取消请输入“cancel”，若要退出请输入“exit”(JXL制)\n",t);
      }
      else if(t==2)
      {
              system("shutdown -s -t 120");
              printf("你的电脑将在%d分钟之后自动关机，若要取消请输入“cancel”，若要退出请输入“exit”(JXL制)\n",t);
      }
      else if(t==3)
      {
              system("shutdown -s -t 180");
              printf("你的电脑将在%d分钟之后自动关机，若要取消请输入“cancel”，若要退出请输入“exit”(JXL制)\n",t);
      }
      else if(t==4)
      {
              system("shutdown -s -t 240");
              printf("你的电脑将在%d分钟之后自动关机，若要取消请输入“cancel”，若要退出请输入“exit”(JXL制)\n",t);
      }
      else if(t==5)
      {
              system("shutdown -s -t 300");
              printf("你的电脑将在%d分钟之后自动关机，若要取消请输入“cancel”，若要退出请输入“exit”(JXL制)\n",t);
      }
      else if(t==6)
      {
              system("shutdown -s -t 360");
              printf("你的电脑将在%d分钟之后自动关机，若要取消请输入“cancel”，若要退出请输入“exit”(JXL制)\n",t);
      }
      else if(t==7)
      {
              system("shutdown -s -t 420");
              printf("你的电脑将在%d分钟之后自动关机，若要取消请输入“cancel”，若要退出请输入“exit”(JXL制)\n",t);
      }
      else if(t==8)
      {
              system("shutdown -s -t 480");
              printf("你的电脑将在%d分钟之后自动关机，若要取消请输入“cancel”，若要退出请输入“exit”(JXL制)\n",t);
      }
      else if(t==9)
      {
              system("shutdown -s -t 540");
              printf("你的电脑将在%d分钟之后自动关机，若要取消请输入“cancel”，若要退出请输入“exit”(JXL制)\n",t);
      }
      else if(t==10)
      {
              system("shutdown -s -t 600");
              printf("你的电脑将在%d分钟之后自动关机，若要取消请输入“cancel”，若要退出请输入“exit”(JXL制)\n",t); 
      }
      else
      {
              printf("你输入的字符有误，请重新输入(JXL制)\n");
              goto n;
      }
      m:;
      for(i=0;s[i]!='\0';i++)             s[i]='\0';
      scanf("%s",s);//此处若用gets(s)会将前文中的\n录入第一次输入，而使得第一次没输入之前显示 "你输入的字符有误，请重新输入，时间继续缩短(JXL制)\n"
      if(strcmp(s,code[0])==0)
      {
              system("shutdown -a");
              printf("你已经成功取消电脑的自动关机，按任意键退出(JXL制)\n");
              getch();
      }
      else if(strcmp(s,code[1])==0)
      {
             
      }
      else
      {
             printf("你输入的字符有误，请重新输入，时间继续缩短(JXL制)\n");
             goto m;
      }
}
