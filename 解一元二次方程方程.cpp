#include<math.h>
#include<stdio.h>
#include<conio.h>
main()
{
      printf("��Ϊ��һԪ���η��̳��򣬼�������\n�󷽳�ax^2+bx+c=0�ĸ�������������a,b,c\n");
      float a,b,c,p,q,d,x1,x2;
      scanf("%f%f%f",&a,&b,&c);
      p=(-b)/(2*a);
      d=sqrt(b*b-4*a*c);
      q=d/(2*a);
      x1=p+q;
      x2=p-q;
      printf("�����ֱ�Ϊ%5.2f %5.2f\n��������\n��������˳�\n",x1,x2);
      getch();
}
      
