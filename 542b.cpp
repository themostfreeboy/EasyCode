#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void work()
{
     system("shutdown -s -t 180");
     printf("��ĵ��Խ���3����֮���Զ��ػ�����Ҫȡ���������롰542b���������س���(JXL��)\n");
     int i,num=1;
     char s[1024],code[1024];
     m:;
     for(i=0;s[i]!='\0';i++)            s[i]='\0';
     gets(s); 
     strcpy(code,"542b");//���ڴ˽�������ı�
     if(strcmp(s,code)==0)
     {
                          system("shutdown -a");
                          system("CLS");
                          printf("��ϲ��2b�����ѳɹ�ȡ���Զ��ػ��������������������(JXL��)\n");
                          getch();
     }
     else
     {
                          if(num==1)     printf("\n��������ַ��������������룬ʱ���������(JXL��)\n");
                          if(num!=1)     printf("\n��������%d�������ַ��������������룬ʱ���������(JXL��)\n",num);
                          num++;
                          goto m;
     }
}
main()
{
      work();//�˺��������������õĵط�ֱ�ӽ��������� 
}
