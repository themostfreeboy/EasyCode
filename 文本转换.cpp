#include<conio.h>
#include<stdio.h>
#include<string.h>
main()
{
      int i,n;
      printf("�������࣬�˳�����Խ��ı�ת�����ɽ���ǰ����ת�����ı��ĵ�������Ҫת�����ַ�������\n");
      scanf("%d",&n);
      char a[n][2*2*2*2*2*2*2*2*2*2];
      printf("\n������������%d���ַ���\n",n);
      for(i=1;i<=n;i++)
           scanf("%s",&a[i]);
      FILE *p1;
      p1=fopen("ת������ı��ĵ�����������.txt","w");
      for(i=1;i<=n;i++)
           fprintf(p1,"%s\t",a[i]);
}
