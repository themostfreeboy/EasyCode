#include<stdio.h>
#include<conio.h>
main()
{
      int i,z;
      char a[1024];
      printf("此为JXL编的a~z与1~26的对应转码表:\n转码请按1;\n解码请按2;\n");
      scanf("%d",&z);
      if(z==1)
      {
              printf("请输入原码：\n");
              scanf("%s",a);
              printf("转码为:\n"); 
              for(i=0;a[i]!='\0';i++)
              {
                     if(a[i]>=65&&a[i]<=90)           a[i]+=32;
                     if(a[i]>=97&&a[i]<=105)          printf("0");
                     if(a[i]>=97&&a[i]<=122)          printf("%d",a[i]-96);
                     if(a[i]>=48&&a[i]<=57)
                     {
                                           printf("0%c",a[i]);
                     }
               }
               printf("\n");
      }
      else if(z==2)
      {
             printf("请输入待解码：\n");
             scanf("%s",a);
             printf("原码为:\n"); 
             for(i=0;a[i]!='\0';i++)
              {
                     if(a[i]>=48&&a[i]<=57)
                     {
                                           printf("%c",(a[i]-48)*10+(a[i+1]-48)+96);
                                           i++;
                     }
               }
               printf("\n");
      }
      getch();
}
