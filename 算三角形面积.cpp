#include<math.h>
#include<stdio.h>
#include<conio.h>
main()
{
      float a,b,c,p,s;
      printf("�˳�����������ε��������������\n���������������߳�\n");
      scanf("%f%f%f",&a,&b,&c);
      p=(a+b+c)/2;
      s=sqrt(p*(p-a)*(p-b)*(p-c));
      printf("���߳��ֱ�Ϊ%7.2f %7.2f %7.2f\n",a,b,c);
      printf("�����ε����Ϊ%7.2f\n��������\n��������˳�\n",s);
      getch();
}
