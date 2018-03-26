#include<conio.h>
#include<stdio.h>
#include<math.h>
int jiecheng(int x)
{
    int i;
    if(x<=31)
    {
         if(x==0)
              x=1;
         else if(x!=0)
         {
              for(i=x-1;i>=1;i--)
                   x*=i;
         }
    }
    return x;
}
int pailie(int n,int m)
{
    int a;
    a=(jiecheng(n))/(jiecheng(n-m));
    return a;
}
int zuhe(int n,int m)
{
    int a;
    a=(jiecheng(n))/((jiecheng(m))*(jiecheng(n-m)));
    return a;
}
main()
{
      int z,q,n,m;
      printf("贾翔龙编，计算:\n1、阶乘数\n2、排列数\n3、组合数\n\n");
      scanf("%d",&z);
      if(z==1)
      {
              printf("\n\n请输入阶乘数n\n");
              scanf("%d",&n);
              if(n<=16)
              {
                       q=jiecheng(n);
                       printf("\n\n%d",q);
              }
              else if(n>=16)
                   printf("\n\n你输入的数据过大，此程序无法计算\n\n");
              else   printf("\n\n你输入的数据有误\n\n");
      }
       if(z==2)
      {
              printf("\n\n请输入排列数(依次输入n和m)\n m\nC\n n\n\n");
              scanf("%d",&n);
              scanf("%d",&m);
              if(n<=16&n>=m)
              {
                       q=pailie(n,m);
                       printf("\n\n%d",q);
              }
              else if(n>=16)
                   printf("\n\n你输入的数据过大，此程序无法计算\n\n");
              else   printf("\n\n你输入的数据有误\n\n");
      }
             if(z==3)
      {
              printf("\n\n请输入组合数(依次输入n和m)\n m\nC\n n\n\n");
              scanf("%d",&n);
              scanf("%d",&m);
              if(n<=16&&n>=m)
              {
                       q=zuhe(n,m);
                       printf("\n\n%d",q);
              }
              else if(n>=16)
                   printf("\n\n你输入的数据过大，此程序无法计算\n\n");
              else   printf("\n\n你输入的数据有误\n\n");
      }
      getch();
}
