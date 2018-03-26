#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int suiji(int x)
{
    time_t t;
    srand((unsigned) time(&t));
    x=rand()%10;
    return x;
}
main()
{
      int x;
      x=suiji(x);
      printf("%d",x);
      getch();
}
