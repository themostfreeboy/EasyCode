#include<stdio.h>
main()
{
      FILE *p;
      p=fopen("����˵��(JXL��).vbs","w");
      fprintf(p,"CreateObject(\"SAPI.SpVoice\").Speak \"") ;
      printf("�ڴ��������õ��Զ����ַ���(������������Ŷ���������붺�š���źͿո�ģ����س���������)����������ڱ��������ڵ��ļ���������һ�����С�����˵��(JXL��).vbs�����ļ���˫���򿪼���\nJXL��\n");
      char s[10240];
      int i;
      gets(s);
      for(i=0;s[i]!='\0';i++)          fprintf(p,"%c",s[i]);
      fprintf(p,"JXL��\"");
      fclose(p);
}
