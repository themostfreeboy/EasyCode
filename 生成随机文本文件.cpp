//��������ı��ļ�
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void exchange(int *pa,int *pb)//Ϊ������ͬ�������������ָ�뽻��
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
    for(i=1;i<=num;i++)           a[i]=i%(y-x+1)+x;//�����������Ϊx~y
    for(i=1;i<=num;i++)//����num���ֽڵ��ַ�
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
         printf("��ΪJXL�����������ļ��ĳ���\n�������������ʾģʽ:\n1����Ļ��ʾ\n2���ı����\n");
         m:;
         scanf("%d",&z[1]);
         if(z[1]==1)
         {
                 printf("������Ҫ����������ı��ļ���\n");
                 mm1:;
                 scanf("%d",&n);
                 if(n<=0)
                 {
                         printf("�������������������������\n");
                         goto mm1;
                 }
                 printf("�����������������ַ��ĸ���(1���ַ���С1B,1KB=1024B)\n");
                 mmm1:;
                 scanf("%d",&num);
                 if(num<=0)
                 {
                         printf("�������������������������\n");
                         goto mmm1;
                 }
                 printf("��������������ַ�������\n1��ֻ��26����дӢ����ĸ\n2��ֻ��26��СдӢ����ĸ\n3��26��Ӣ�Ĵ�д��ĸ��26��Ӣ��Сд��ĸ\n4��ֻ��0-9ʮ������\n5�������ַ�(���ո�)\n6�������ַ�(�����ո�)\n7���ֶ���������ַ���ASC2�뷶Χ\n");
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
                            printf("�����뷶Χ�߽��������(���߽�)\n");
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
                                   printf("�������������������������\n");
                                   goto mmmmm1;
                            }
                 }
                 else
                 {
                        printf("�������������������������\n");
                        goto mmmm1;
                 }
                 printf("������ϣ���������˳�\n");
                 getch();
         }
         else if(z[1]==2)
         {
                 printf("������Ҫ����������ı��ļ���\n");
                 mm2:;
                 scanf("%d",&n);
                 if(n<=0)
                 {
                         printf("�������������������������\n");
                         goto mm2;
                 }
                 printf("�����������������ַ��ĸ���(1���ַ���С1B,1KB=1024B)\n");
                 mmm2:;
                 scanf("%d",&num);
                 if(num<=0)
                 {
                         printf("�������������������������\n");
                         goto mmm2;
                 }
                 printf("��������������ı��ļ���Ŀ¼:\n1���ó�������Ŀ¼��\n2���ֶ�ָ��Ŀ¼(�ϲ����²��ļ���֮����\"\\\"��ʾ����:\"D:\\\\temp\\\\\")\n");
                 mmmm2:;
                 scanf("%d",&z[3]);
                 if(z[3]==1)
                 {
                            printf("����������ļ����Ĺ�������\n");
                            scanf("%s",filename0);
                 }
                 else if(z[3]==2)
                 {
                            printf("�������ļ�Ŀ¼����(���ļ�Ŀ¼�����Ǵ��ڵ�Ŀ¼)\n");
                            scanf("%s",filename0); 
                            printf("����������ļ����Ĺ�������\n");
                            scanf("%s",filename1); 
                            strcat(filename0,filename1);
                 }
                 else
                 {
                         printf("�������������������������\n");
                         goto mmmm2;
                 }
                 printf("��������������ַ�������\n1��ֻ��26����дӢ����ĸ\n2��ֻ��26��СдӢ����ĸ\n3��26��Ӣ�Ĵ�д��ĸ��26��Ӣ��Сд��ĸ\n4��ֻ��0-9ʮ������\n5�������ַ�(���ո�)\n6�������ַ�(�����ո�)\n7���ֶ���������ַ���ASC2�뷶Χ\n");
                 mmmmm2:;
                 scanf("%d",&z[2]);
                 if(z[2]==1)
                 {
                            printf("��������,���Ժ󡭡�\n");
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
                            printf("��������,���Ժ󡭡�\n");
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
                            printf("��������,���Ժ󡭡�\n");
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
                            printf("��������,���Ժ󡭡�\n");
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
                            printf("��������,���Ժ󡭡�\n");
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
                            printf("��������,���Ժ󡭡�\n");
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
                            printf("�����뷶Χ�߽��������(���߽�)\n");
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
                                       printf("��������,���Ժ󡭡�\n");
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
                                   printf("�������������������������\n");
                                   goto mmmmmm2;
                            }
                 }
                 else
                 {
                        printf("�������������������������\n");
                        goto mmmmm2;
                 }
                 fclose(stdout);
                 freopen("CON","w",stdout);
                 printf("������ϣ���������˳�\n");
                 getch();
         }
         else
         {
             printf("�������������������������\n");
             goto m;
         }
         return 0;
}
