#include<stdio.h>
#include<conio.h>
main()
{
      printf("此程序算圆的周长及面积，贾翔龙编\n请输入圆的半径\n");
      float r,c,s,p;
      p=3.141592653589793238462643383279502884197165399375105820;
      scanf("%f",&r);
      c=2*p*r;
      s=p*r*r;
      printf("周长为%f\n面积为%f\n贾翔龙编\n按任意键退出\n",c,s);  
      getch();
}
