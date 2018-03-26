#include <stdio.h>
#include <conio.h>
main()
{
      printf("此为贾翔龙所制作的简易计算器，输入2个数即可算出相应运算，不过它的计算能力有限，别算太难的呦！\n");
      int x,y,z,a,b;
      float d,e; 
      scanf("%d %d",&x,&y);
      z=x+y;
      a=x-y;
      b=x*y;
      d=x/y;
      e=(x+y)/2;
      printf("和为%d\n差为%d\n积为%d\n商为%f\n平均数为%f\n此为贾翔龙所制作，谢谢合作，按任意键退出\n",z,a,b,d,e);
      getch();
}
