#include<conio.h>
#include<stdio.h>
#include<math.h>
int zhishu(int x)
{
         int i,tag=0;
         if(x==1)          tag=1;
         else
         {
                  for(i=2;i<=sqrt(x);i++)
                  {
                                        if(x%i==0)
                                        {
                                                  tag=1;
                                                  break;
                                        }
                  }
         }
         return tag;
}
main()
{
                    int a,b,i,tag=0;
                    printf("��������\n��Ϊ����������򣬿��������a��b��������������ֱ�����a��b\na=");
                    scanf("%d",&a);
                    printf("\nb=");
                    scanf("%d",&b);
                    printf("\n\n");
                    for(i=a;i<=b;i++)
                    {
                                     if(zhishu(i)==0)
                                     {
                                                     printf("%d\t",i);
                                                     tag++;
                                     }
                    }
                    printf("\n\n��%d��\n",tag);
                    getch();                  
}
