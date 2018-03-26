//生成随机文本文件
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void exchange(int *pa,int *pb)//为产生不同的随机数而进行指针交换
{
         int change;
         change=*pa;
         *pa=*pb;
         *pb=change;
}
void suiji(int b[],int num,int x,int y)
{
    int i;
    int a[10240];
    for(i=1;i<=num;i++)           a[i]=i%(y-x+1)+x;//产生的随机数为x~y
    for(i=1;i<=num;i++)//产生num个字节的字符
    {
                            exchange(&a[i],&a[rand()%i+1]);
                            b[i]=a[i];
    }
}
int main()
{
         char filename[100],filename0[100],filename1[100],filename2[100];
         int a[10240];
         unsigned long i,j,n,num,z[10],x,y,t;
         printf("此为JXL编的生成随机文件的程序\n请输入产生的显示模式:\n1、屏幕显示\n2、文本输出\n");
         m:;
         scanf("%d",&z[1]);
         if(z[1]==1)
         {
                 printf("输入想要产生的随机文本文件数\n");
                 mm1:;
                 scanf("%d",&n);
                 if(n<=0)
                 {
                         printf("你输入的数据有误，请重新输入\n");
                         goto mm1;
                 }
                 printf("请输入你想产生随机字符的个数(1个字符大小1B,1KB=1024B)\n");
                 mmm1:;
                 scanf("%d",&num);
                 if(num<=0)
                 {
                         printf("你输入的数据有误，请重新输入\n");
                         goto mmm1;
                 }
                 printf("请输入你想产生字符的类型\n1、只有26个大写英文字母\n2、只有26个小写英文字母\n3、26个英文大写字母和26个英文小写字母\n4、只有0-9十个数字\n5、所有字符(含空格)\n6、所有字符(不含空格)\n7、手动输入产生字符的ASC2码范围\n");
                 mmmm1:;
                 scanf("%d",&z[2]);
                 if(z[2]==1)
                 {
                            for(j=1;j<=n;j++)
                            {
                                       suiji(a,num,65,90);
                                       for(i=1;a[i]!='\0';i++)    printf("%c",a[i]);
                                       printf("\n\n");
                            }
                 }
                 else if(z[2]==2)
                 {
                            for(j=1;j<=n;j++)
                            {
                                       suiji(a,num,97,122);
                                       for(i=1;a[i]!='\0';i++)    printf("%c",a[i]);
                                       printf("\n\n");
                            }
                 }
                 else if(z[2]==3)
                 {
                            for(j=1;j<=n;j++)
                            {
                                       suiji(a,num,65,116);
                                       for(i=1;a[i]!='\0';i++)
                                       {
                                                      if(a[i]>90)      a[i]+=6;
                                                      printf("%c",a[i]);                
                                       }
                                       printf("\n\n");
                            } 
                 }
                 else if(z[2]==4)
                 {
                            for(j=1;j<=n;j++)
                            {
                                       suiji(a,num,48,57);
                                       for(i=1;a[i]!='\0';i++)    printf("%c",a[i]);
                                       printf("\n\n");
                            }
                 }
                 else if(z[2]==5)
                 {
                            for(j=1;j<=n;j++)
                            {
                                       suiji(a,num,32,126);
                                       for(i=1;a[i]!='\0';i++)    printf("%c",a[i]);
                                       printf("\n\n");
                            }
                 }
                 else if(z[2]==6)
                 {
                            for(j=1;j<=n;j++)
                            {
                                       suiji(a,num,33,126);
                                       for(i=1;a[i]!='\0';i++)    printf("%c",a[i]);
                                       printf("\n\n");
                            }
                 }
                  else if(z[2]==7)
                 {
                            printf("请输入范围边界的两个数(含边界)\n");
                            mmmmm1:;
                            scanf("%d%d",&x,&y);
                            if(x>=32&&x<=126&&y>=32&&y<=126)
                            {
                                       if(x>y)
                                       {
                                                 t=x;
                                                 x=y;
                                                 y=t;                
                                       }
                                       for(j=1;j<=n;j++)
                                       {
                                                 suiji(a,num,x,y);
                                                 for(i=1;a[i]!='\0';i++)    printf("%c",a[i]);
                                                 printf("\n\n");
                                       }
                            }
                             else
                            {
                                   printf("你输入的数据有误，请重新输入\n");
                                   goto mmmmm1;
                            }
                 }
                 else
                 {
                        printf("你输入的数据有误，请重新输入\n");
                        goto mmmm1;
                 }
                 printf("生成完毕，按任意键退出\n");
                 getch();
         }
         else if(z[1]==2)
         {
                 printf("输入想要产生的随机文本文件数\n");
                 mm2:;
                 scanf("%d",&n);
                 if(n<=0)
                 {
                         printf("你输入的数据有误，请重新输入\n");
                         goto mm2;
                 }
                 printf("请输入你想产生随机字符的个数(1个字符大小1B,1KB=1024B)\n");
                 mmm2:;
                 scanf("%d",&num);
                 if(num<=0)
                 {
                         printf("你输入的数据有误，请重新输入\n");
                         goto mmm2;
                 }
                 printf("请输入生成随机文本文件的目录:\n1、该程序所在目录下\n2、手动指定目录(上层与下层文件夹之间用\"\\\"表示，如:\"D:\\\\temp\\\\\")\n");
                 mmmm2:;
                 scanf("%d",&z[3]);
                 if(z[3]==1)
                 {
                            printf("请输入随机文件名的公共名称\n");
                            scanf("%s",filename0);
                 }
                 else if(z[3]==2)
                 {
                            printf("请输入文件目录名称(该文件目录必须是存在的目录)\n");
                            scanf("%s",filename0); 
                            printf("请输入随机文件名的公共名称\n");
                            scanf("%s",filename1); 
                            strcat(filename0,filename1);
                 }
                 else
                 {
                         printf("你输入的数据有误，请重新输入\n");
                         goto mmmm2;
                 }
                 printf("请输入你想产生字符的类型\n1、只有26个大写英文字母\n2、只有26个小写英文字母\n3、26个英文大写字母和26个英文小写字母\n4、只有0-9十个数字\n5、所有字符(含空格)\n6、所有字符(不含空格)\n7、手动输入产生字符的ASC2码范围\n");
                 mmmmm2:;
                 scanf("%d",&z[2]);
                 if(z[2]==1)
                 {
                            printf("正在生成,请稍后……\n");
                            for(j=1;j<=n;j++)
                            {
                                       sprintf(filename,"%s%d.txt",filename0,j);
                                       freopen(filename,"w",stdout);
                                       suiji(a,num,65,90);
                                       for(i=1;a[i]!='\0';i++)    printf("%c",a[i]);
                            }
                 }
                 else if(z[2]==2)
                 {
                            printf("正在生成,请稍后……\n");
                            for(j=1;j<=n;j++)
                            {
                                       sprintf(filename,"%s%d.txt",filename0,j);
                                       freopen(filename,"w",stdout);
                                       suiji(a,num,97,122);
                                       for(i=1;a[i]!='\0';i++)    printf("%c",a[i]);
                            }
                 }
                 else if(z[2]==3)
                 {
                            printf("正在生成,请稍后……\n");
                            for(j=1;j<=n;j++)
                            {
                                       sprintf(filename,"%s%d.txt",filename0,j);
                                       freopen(filename,"w",stdout);
                                       suiji(a,num,65,116);
                                       for(i=1;a[i]!='\0';i++)
                                       {
                                                      if(a[i]>90)      a[i]+=6;
                                                      printf("%c",a[i]);                
                                       }
                            } 
                 }
                 else if(z[2]==4)
                 {
                            printf("正在生成,请稍后……\n");
                            for(j=1;j<=n;j++)
                            {
                                       sprintf(filename,"%s%d.txt",filename0,j);
                                       freopen(filename,"w",stdout);
                                       suiji(a,num,48,57);
                                       for(i=1;a[i]!='\0';i++)    printf("%c",a[i]);
                            }
                 }
                 else if(z[2]==5)
                 {
                            printf("正在生成,请稍后……\n");
                            for(j=1;j<=n;j++)
                            {
                                       sprintf(filename,"%s%d.txt",filename0,j);
                                       freopen(filename,"w",stdout);
                                       suiji(a,num,32,126);
                                       for(i=1;a[i]!='\0';i++)    printf("%c",a[i]);
                            }
                 }
                 else if(z[2]==6)
                 {
                            printf("正在生成,请稍后……\n");
                            for(j=1;j<=n;j++)
                            {
                                       sprintf(filename,"%s%d.txt",filename0,j);
                                       freopen(filename,"w",stdout);
                                       suiji(a,num,33,126);
                                       for(i=1;a[i]!='\0';i++)    printf("%c",a[i]);
                            }
                 }
                  else if(z[2]==7)
                 {
                            printf("请输入范围边界的两个数(含边界)\n");
                            mmmmmm2:;
                            scanf("%d%d",&x,&y);
                            if(x>=32&&x<=126&&y>=32&&y<=126)
                            {
                                       if(x>y)
                                       {
                                                 t=x;
                                                 x=y;
                                                 y=t;                
                                       }
                                       printf("正在生成,请稍后……\n");
                                       for(j=1;j<=n;j++)
                                       {
                                                 sprintf(filename,"%s%d.txt",filename0,j);
                                                 freopen(filename,"w",stdout);
                                                 suiji(a,num,x,y);
                                                 for(i=1;a[i]!='\0';i++)    printf("%c",a[i]);
                                       }
                            }
                             else
                            {
                                   printf("你输入的数据有误，请重新输入\n");
                                   goto mmmmmm2;
                            }
                 }
                 else
                 {
                        printf("你输入的数据有误，请重新输入\n");
                        goto mmmmm2;
                 }
                 fclose(stdout);
                 freopen("CON","w",stdout);
                 printf("生成完毕，按任意键退出\n");
                 getch();
         }
         else
         {
             printf("你输入的数据有误，请重新输入\n");
             goto m;
         }
         return 0;
}
