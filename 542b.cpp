#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void work()
{
     system("shutdown -s -t 180");
     printf("你的电脑将在3分钟之后自动关机，若要取消，请输入“542b”，并按回车键(JXL制)\n");
     int i,num=1;
     char s[1024],code[1024];
     m:;
     for(i=0;s[i]!='\0';i++)            s[i]='\0';
     gets(s); 
     strcpy(code,"542b");//可在此进行密码改编
     if(strcmp(s,code)==0)
     {
                          system("shutdown -a");
                          system("CLS");
                          printf("恭喜你2b，你已成功取消自动关机，按任意键结束本程序(JXL制)\n");
                          getch();
     }
     else
     {
                          if(num==1)     printf("\n你输入的字符有误，请重新输入，时间继续缩短(JXL制)\n");
                          if(num!=1)     printf("\n你已连续%d次输入字符有误，请重新输入，时间继续缩短(JXL制)\n",num);
                          num++;
                          goto m;
     }
}
main()
{
      work();//此函数可在其它想用的地方直接将函数复制 
}
