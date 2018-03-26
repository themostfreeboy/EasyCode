#include <stdio.h>
#include <conio.h>
#include <string.h>
char e[50],a[50];
int  n=0;
int  len;
void m_h()
{
     char sq[50],w;
     int top=-1,i=0,j=0;
     while(i<len)
     {
                switch(e[i])
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
                                       while((e[i]>='0')&&(e[i]<='9'))
                                       {
                                                 a[j]=e[i];
                                                 i++;
                                                 j++;
                                       }
                                       a[j]='.';
                                       j++;
                                       i--;
                                       break;
                            }
                            case '(':
                            {
                                      top++;
                                      sq[top]='(';
                                      break;
                            }
                            case ')':
                            {
                                      w=sq[top];
                                      while(w!='(') 
                                      {
                                                    a[j]=w;
                                                    j++;
                                                    top--;
                                                    w=sq[top];
                                      }
                                      top--;
                                      break;
                            }
                             case '+':
                             case '-':
                             {
                                        if (top!=-1)
                                        {
                                                      w=sq[top];
                                                      while(w!='(')
                                                      { 
                                                                   a[j]=w;
                                                                   j++;
                                                                   top--;
                                                                   if(top!=-1) w=sq[top];
                                                                   else break;
                                                      }
                                        }
                                        top++;sq[top]=e[i];
                                        break;
                             }
                             case '*':
                             case '/':
                             {
                                           if (top!=-1)
                                           {
                                                      w=sq[top];
                                                      while((w=='*')||(w=='/'))
                                                      { 
                                                                  a[j]=w;
                                                                  j++;
                                                                  top--;
                                                                  if(top!=-1) w=sq[top];
                                                                  else break;
                                                      }
                                                      
                                           }
                                           top++;sq[top]=e[i];
                                           break;
                             }
                }
                i++;  
     }
     while(top!=-1)
     {
                   a[j]=sq[top];
                   j++;
                   top--;
     }
     a[j]='@';
}
void c_h()
{
     int top2=-1,sq2[50],i=0,j=0,w1,w2;
     int s;
     while(a[i]!='@')
     {
                switch(a[i])
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
                                       while((a[i]>='0')&&(a[i]<='9'))
                                       {
                                                 s=s*10+a[i]-'0';
                                                 i++;
                                       }
                                       top2++;
                                       sq2[top2]=s;
                                       break;
                            }
                            case '+':
                            {
                                      w1=sq2[top2];
                                      top2--;
                                      w2=sq2[top2];
                                      sq2[top2]=w1+w2;
                                      break;
                            }
                            case '-':
                            {         
                                      w1=sq2[top2];
                                      top2--;
                                      w2=sq2[top2];
                                      sq2[top2]=w2-w1;
                                      break;
                            }
                            case '*':
                            {
                                      w1=sq2[top2];
                                      top2--;
                                      w2=sq2[top2];
                                      sq2[top2]=w1*w2;
                                      break;
                            }
                            case '/':
                            {
                                      w1=sq2[top2];
                                      top2--;
                                      w2=sq2[top2];
                                      sq2[top2]=w2/w1;
                                      break;
                            }
                }
                i++;  
     } 
     n=sq2[top2];
}
main()
{
       printf("此为贾翔龙编的整数四则运算程序，可用括号，请输入要计算的式子:\n");
       scanf("%s",&e);
       len=strlen(e);
       m_h();
       c_h();
       printf("\n最终结果为%d\n\n贾翔龙编\n\n",n);
       getch(); 
}
