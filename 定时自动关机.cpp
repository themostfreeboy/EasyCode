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
      //���ڴ˼������������Ӧ�ַ����� 
      printf("��Ϊ�Զ��ػ�������������Ҫ�೤ʱ���Զ��ػ������������(1~10֮�������)����(JXL��)\n");
      n:;
      scanf("%d",&t);
      system("CLS");
      if(t==1)
      {
              system("shutdown -s -t 60");
              printf("��ĵ��Խ���%d����֮���Զ��ػ�����Ҫȡ�������롰cancel������Ҫ�˳������롰exit��(JXL��)\n",t);
      }
      else if(t==2)
      {
              system("shutdown -s -t 120");
              printf("��ĵ��Խ���%d����֮���Զ��ػ�����Ҫȡ�������롰cancel������Ҫ�˳������롰exit��(JXL��)\n",t);
      }
      else if(t==3)
      {
              system("shutdown -s -t 180");
              printf("��ĵ��Խ���%d����֮���Զ��ػ�����Ҫȡ�������롰cancel������Ҫ�˳������롰exit��(JXL��)\n",t);
      }
      else if(t==4)
      {
              system("shutdown -s -t 240");
              printf("��ĵ��Խ���%d����֮���Զ��ػ�����Ҫȡ�������롰cancel������Ҫ�˳������롰exit��(JXL��)\n",t);
      }
      else if(t==5)
      {
              system("shutdown -s -t 300");
              printf("��ĵ��Խ���%d����֮���Զ��ػ�����Ҫȡ�������롰cancel������Ҫ�˳������롰exit��(JXL��)\n",t);
      }
      else if(t==6)
      {
              system("shutdown -s -t 360");
              printf("��ĵ��Խ���%d����֮���Զ��ػ�����Ҫȡ�������롰cancel������Ҫ�˳������롰exit��(JXL��)\n",t);
      }
      else if(t==7)
      {
              system("shutdown -s -t 420");
              printf("��ĵ��Խ���%d����֮���Զ��ػ�����Ҫȡ�������롰cancel������Ҫ�˳������롰exit��(JXL��)\n",t);
      }
      else if(t==8)
      {
              system("shutdown -s -t 480");
              printf("��ĵ��Խ���%d����֮���Զ��ػ�����Ҫȡ�������롰cancel������Ҫ�˳������롰exit��(JXL��)\n",t);
      }
      else if(t==9)
      {
              system("shutdown -s -t 540");
              printf("��ĵ��Խ���%d����֮���Զ��ػ�����Ҫȡ�������롰cancel������Ҫ�˳������롰exit��(JXL��)\n",t);
      }
      else if(t==10)
      {
              system("shutdown -s -t 600");
              printf("��ĵ��Խ���%d����֮���Զ��ػ�����Ҫȡ�������롰cancel������Ҫ�˳������롰exit��(JXL��)\n",t); 
      }
      else
      {
              printf("��������ַ���������������(JXL��)\n");
              goto n;
      }
      m:;
      for(i=0;s[i]!='\0';i++)             s[i]='\0';
      scanf("%s",s);//�˴�����gets(s)�Ὣǰ���е�\n¼���һ�����룬��ʹ�õ�һ��û����֮ǰ��ʾ "��������ַ��������������룬ʱ���������(JXL��)\n"
      if(strcmp(s,code[0])==0)
      {
              system("shutdown -a");
              printf("���Ѿ��ɹ�ȡ�����Ե��Զ��ػ�����������˳�(JXL��)\n");
              getch();
      }
      else if(strcmp(s,code[1])==0)
      {
             
      }
      else
      {
             printf("��������ַ��������������룬ʱ���������(JXL��)\n");
             goto m;
      }
}
