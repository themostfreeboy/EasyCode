#include<conio.h>
#include<stdio.h>
#include<string.h>
main()
{
      int i,n;
      printf("贾翔龙编，此程序可以将文本转化，可将当前窗口转化成文本文档，输入要转化的字符串个数\n");
      scanf("%d",&n);
      char a[n][2*2*2*2*2*2*2*2*2*2];
      printf("\n请依次输入这%d个字符串\n",n);
      for(i=1;i<=n;i++)
           scanf("%s",&a[i]);
      FILE *p1;
      p1=fopen("转化后的文本文档（贾翔龙）.txt","w");
      for(i=1;i<=n;i++)
           fprintf(p1,"%s\t",a[i]);
}
