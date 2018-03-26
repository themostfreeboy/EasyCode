#include<conio.h>
#include<stdio.h>
main()
{
      printf("此为贾翔龙编的后缀表达式计算程序，请输入后缀表达式(输完后用@结束)\n");
      char ch;
      int sq[100],top=-1,s,x1,x2;
      scanf("%c",&ch);
      while(ch!='@')
      {
                    switch(ch)
                    {
                              case '0':
                              case '1':
                              case '2':
                              case '3':
                              case '4':
                              case '5':
                              case '6':
                              case '7':
                              case '8':
                              case '9':
                              {
                                        s=0;
                                        while(ch<='9'&&ch>='0')
                                        {
                                                      s=s*10+(ch-'0');
                                                      scanf("%c",&ch);
                                        }
                                        top++;
                                        sq[top]=s;
                                        break;
                              }
                              case '+':
                              {
                                         x1=sq[top];
                                         top--;
                                         x2=sq[top];
                                         sq[top]=x2+x1;
                                         break;
                              }
                              case '-':
                              {
                                         x1=sq[top];
                                         top--;
                                         x2=sq[top];
                                         sq[top]=x2-x1;
                                         break;
                              }
                              case '*':
                              {
                                         x1=sq[top];
                                         top--;
                                         x2=sq[top];
                                         sq[top]=x2*x1;
                                         break;
                              }
                              case '/':
                              {
                                         x1=sq[top];
                                         top--;
                                         x2=sq[top];
                                         sq[top]=x2/x1;
                                         break;
                              }
                    }
                    scanf("%c",&ch);
      }
      printf("\n%d\n",sq[0]);
      getch();
}
