#include<stdio.h>
main()
{
      FILE *p;
      p=fopen("电脑说话(JXL制).vbs","w");
      fprintf(p,"CreateObject(\"SAPI.SpVoice\").Speak \"") ;
      printf("在此输入想让电脑读的字符串(可以输入中文哦，可以输入逗号、句号和空格的，按回车结束输入)，结束后会在本程序所在的文件夹下生成一个名叫“电脑说话(JXL制).vbs”的文件，双击打开即可\nJXL制\n");
      char s[10240];
      int i;
      gets(s);
      for(i=0;s[i]!='\0';i++)          fprintf(p,"%c",s[i]);
      fprintf(p,"JXL制\"");
      fclose(p);
}
