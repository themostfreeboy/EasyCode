#include<stdio.h>
#include<conio.h>
main()
{
      int n;
      printf("�������࣬�˳�����Բ��n���������ֵ����������n\nn=");
      scanf("%d",&n);
      printf("\n������������%d����\n",n);
      int max=0,i,a[n];
      for(i=0;i<=(n-1);i++)
      scanf("%d",&a[i]);
      printf("\n");
      max=(a[1]>a[0])?a[1]:a[0];
      for(i=0;i<=(n-2);i++)
      max=(a[i+1]>max)?a[i+1]:max;
      printf("��%d���������ֵΪ%d\n",n,max);
      getch();
}
