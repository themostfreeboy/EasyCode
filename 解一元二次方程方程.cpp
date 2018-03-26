#include<math.h>
#include<stdio.h>
#include<conio.h>
main()
{
      printf("此为解一元二次方程程序，贾翔龙编\n求方程ax^2+bx+c=0的根，请依次输入a,b,c\n");
      float a,b,c,p,q,d,x1,x2;
      scanf("%f%f%f",&a,&b,&c);
      p=(-b)/(2*a);
      d=sqrt(b*b-4*a*c);
      q=d/(2*a);
      x1=p+q;
      x2=p-q;
      printf("两根分别为%5.2f %5.2f\n贾翔龙编\n按任意键退出\n",x1,x2);
      getch();
}
      
