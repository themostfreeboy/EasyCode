#include <stdio.h>
#include <conio.h>
main()
{
      printf("��Ϊ�������������ļ��׼�����������2�������������Ӧ���㣬�������ļ����������ޣ�����̫�ѵ��ϣ�\n");
      int x,y,z,a,b;
      float d,e; 
      scanf("%d %d",&x,&y);
      z=x+y;
      a=x-y;
      b=x*y;
      d=x/y;
      e=(x+y)/2;
      printf("��Ϊ%d\n��Ϊ%d\n��Ϊ%d\n��Ϊ%f\nƽ����Ϊ%f\n��Ϊ��������������лл��������������˳�\n",z,a,b,d,e);
      getch();
}
