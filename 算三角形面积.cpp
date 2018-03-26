#include<math.h>
#include<stdio.h>
#include<conio.h>
main()
{
      float a,b,c,p,s;
      printf("此程序将算出三角形的面积，贾翔龙编\n请输入三角形三边长\n");
      scanf("%f%f%f",&a,&b,&c);
      p=(a+b+c)/2;
      s=sqrt(p*(p-a)*(p-b)*(p-c));
      printf("三边长分别为%7.2f %7.2f %7.2f\n",a,b,c);
      printf("三角形的面积为%7.2f\n贾翔龙编\n按任意键退出\n",s);
      getch();
}
