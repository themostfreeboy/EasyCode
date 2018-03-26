#include<conio.h>
#include<stdio.h>
main()
{
      printf("此程序显示了计算机全部的ASC码\n\n");
      int i;
      for(i=0;i<=128;i++)
      printf("第%d个 %c\n",i,i);
      getch();
}
