#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
      int i,choose;
      printf("��Ϊ���������0~127��ASC2�����ʾ����Ļ��ʾ�밴1���ļ���ʾ�밴2\n");
      scanf("%d",&choose);
      if(choose==1)
      {
                   system("cls");
                   for(i=0;i<=127;i++)          printf("%d\t%c\n",i,i);
                   printf("\n��Ļ��ʾ��ϣ���������˳�\n��������\n");
      }
      else if(choose==2)
      {
                   FILE *p;
                   p=fopen("����ASC2��.txt","w");
                   for(i=0;i<=127;i++)          fprintf(p,"%d\t%c\n",i,i);
                   fprintf(p,"\n��������\n");
                   fclose(p);
                   system("cls");
                   printf("�ļ���ʾ��ϣ��ļ����뱾������ͬĿ¼�µġ�����ASC2��.txt���У������в鿴����������˳�\n��������\n");
      } 
      getch();
}
