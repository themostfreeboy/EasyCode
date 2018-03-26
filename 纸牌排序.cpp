#include<conio.h>
#include<stdio.h>
#include<string.h>
void paixu(int a[],int n)
{
    int j,i,t,q,min;
    for(i=0;i<n-1;i++)
    {
              min=a[i];
              t=i;
              q=a[i];
              for(j=i+1;j<n;j++)
                        if(a[j]<min)
                        {
                                    min=a[j];
                                    t=j;
                        }
              a[i]=a[t];
              a[t]=q;
    }
}
main()
{
      printf("贾翔龙编，此为纸牌排序程序，具体排序规则为:\n给定n张扑克牌，按照以下要求进行排序：\n(1)四种花色红桃、方片、黑桃和梅花分别由字母h、f、t、m表示，每种花色的牌由数字1--13分别表示，即“尖”为1，k为13,如黑桃j用数字t11表示，其他以此类推。大王表示为k1，小王表示为k2。\n(2)四种花色按红桃、方片、黑桃和梅花的顺序排序，如果有王的话，王排在最左边，即起始位置。\n(3)每种花色按表示数字由小到大的顺序排序，大王排在小王的后面。\n(4)这n张牌可以没有王或者没有某种或某些种花色的牌。\n\n请输入牌数n\nn=");
      int n,i;
      scanf("%d",&n);
      printf("\n\n请输入这%d张纸牌\n",n);
      char a[n+2];
      int b[n+2],c[n+2];
      for(i=0;i<n;i++)
      {
                       scanf(" ");
                       scanf("%c%d",&a[i],&b[i]);
      }
      for(i=0;i<n;i++)
      {
                       if(a[i]=='k') c[i]=1000+b[i];
                       else if(a[i]=='h') c[i]=2000+b[i];
                       else if(a[i]=='f') c[i]=3000+b[i];
                       else if(a[i]=='t') c[i]=4000+b[i];
                       else if(a[i]=='m') c[i]=5000+b[i];
                       else printf("你的第%d的数据输入有误\n",i+1);
      }
      paixu(c,n);
      printf("\n\n顺序为:\n");
      for(i=0;i<n;i++)
      {
                if(c[i]%5000<100) printf("m%d\t",c[i]%5000);
                else if(c[i]%4000<100) printf("t%d\t",c[i]%4000);
                else if(c[i]%3000<100) printf("f%d\t",c[i]%3000);
                else if(c[i]%2000<100) printf("h%d\t",c[i]%2000);
                else if(c[i]%1000<100) printf("k%d\t",c[i]%1000);
                else printf("你的第%d的数据输入有误\n",i+1);
      }
      printf("\n\n");
      getch();
}
