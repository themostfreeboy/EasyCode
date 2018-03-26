#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
int max(int x,int y)
{
    int max;
    max=(x>y)?x:y;
    return max;
}
void huanwei(char x[][5],int u,int v)
{
     int b,i,j;
     char exchange;
     b=max(strlen(x[u]),strlen(x[v]));
     for(i=0;i<b;i++)
     {
                     exchange=x[u][i];
                     x[u][i]=x[v][i];
                     x[v][i]=exchange;
     }
}
void huanshu(float x[],int m,int n)
{
     int q;
     q=x[m];
     x[m]=x[n];
     x[n]=q;
}
main()
{
      printf("贾翔龙编，此程序可以对成绩由高到低排序，请输入排序学生人数\n");
      int n,i,j,k;
      scanf("%d",&n);
      float a[n+1],min,t,q;
      char b[n+1][5];
      int c[n+1];
      printf("\n请分别输入这%d个人的姓名\n",n);
      for(i=0;i<n;i++)
                scanf("%s",&b[i]);
      printf("\n请分别输入这%d个人的总分(要求与上面所输姓名的顺序相对应)\n",n);
      for(i=0;i<n;i++)
                scanf("%f",&a[i]);
      for(i=0;i<n-1;i++)
      {
                k=i;
                for(j=i+1;j<n;j++)
                          if(a[j]<a[k])
                          {
                                      k=j;
                          }
                huanshu(a,i,k);
                huanwei(b,i,k);
      }
      printf("\n姓名:\n");
      for(i=n-1;i>=0;i--)
                printf("%s\t",b[i]);
      printf("\n总分:\n");
      for(i=n-1;i>=0;i--)
                printf("%f\t",a[i]);
      getch();
}
